#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;


bool isSafe(char maze[][3], int row, int col, bool visited[][3], int newX, int newY) 
{
    if((newX>=0 && newX < row) && (newY>=0 && newY < col) && maze[newX][newY] == '.' && visited[newX][newY] == false)
    {
        return true;
    }
    else{
        return false;
    }
}


void solve(char maze[][3], int row, int col, int srcX, int srcY, string output, int destX, int destY, bool visited[][3])
{
    // base case -> if current pos == destination -> answer is ready, print it and return
    if(srcX == destX && srcY == destY)
    {
        // iska mtlb rat is standint on dest only
        cout<< output<<endl;
    }

    // 1. case main solve karunga, baaki recursion sambhal lega
    // 1 case -> 1 movement -> Up or Down or Left or Right

     int dx[] = {-1, 1, 0, 0};
     int dy[] = {0, 0, -1, 1};
     char direction[] = {'U', 'D', 'L', 'R'};

     for(int i=0; i<4; i++)
     {
        int newX = srcX + dx[i];
        int newY = srcY + dy[i];
        char dir = direction[i];

        if(isSafe(maze, row, col, visited, newX, newY))
        {
            visited[newX][newY] = true;

            // baaki recursion
            solve(maze, row, col, newX, newY, output + dir, destX, destY, visited);
            // jab mai wapas aaya
            visited[newX][newY] = false;
        }
    }

     
    

}



int main()
{
    // maze contains '.' and '-'
    // -> '.' -> rat can move here
    // -> '-' -> rat cannot move here

    char arr[3][3] = {
        {'.', '.', '.'},
        {'.', '-', '-'},
        {'.', '.', '.'}
    };

    int row = 3;
    int col = 3;
    // src -> 0,0
    int srcX = 0;
    int srcY = 0;
    // dest -> n-1, n-1->(2,2)
    int destX = row-1;
    int destY = col-1;
    string output = "";

    bool visited[3][3] = {
        {true, false, false},
        {false, false, false},
        {false, false, false}
    };

    solve(arr, row, col, srcX, srcY, output, destX, destY, visited);
}