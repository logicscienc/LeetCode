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

    // UP
    int newX = srcX - 1;
    int newY = srcY;
    if(isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;

        // baaki recursion
        solve(maze, row, col, newX, newY, output + 'U', destX, destY, visited);

        // jab main waps aaya
        visited[newX][newY] = false;
    }

    // Down

    newX = srcX + 1;
    newY = srcY;
    if(isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;

        // baaki recursion
        solve(maze, row, col, newX, newY, output + 'D', destX, destY, visited);

        // jab main waps aaya
        visited[newX][newY] = false;
    }

    // LEFT
    newX = srcX;
    newY = srcY - 1;

     if(isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;

        // baaki recursion
        solve(maze, row, col, newX, newY, output + 'L', destX, destY, visited);

        // jab main waps aaya
        visited[newX][newY] = false;
    }

    // RIGHT
    newX = srcX;
    newY = srcY + 1;

     if(isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;

        // baaki recursion
        solve(maze, row, col, newX, newY, output + 'R', destX, destY, visited);

        // jab main waps aaya
        visited[newX][newY] = false;
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