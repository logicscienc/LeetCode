#include<iostream>
#include<limits.h>
#include<string>
#include<vector>
#include<stack>

using namespace std;


void printMiddleFromStack(stack<int>& s, int count, int totalSize)
{
    // base case
    if(count == totalSize/2)
    {
        cout<<s.top() <<endl;
        return;
    }

    // ek case hum solve karenge baaki recursion sambhal lega
    int value = s.top();
    s.pop();
    count++;

    // recursion
    printMiddleFromStack(s,count,totalSize);
    // backtracking
    s.push(value);
}











int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int count=0;
    int totalSize=s.size();

    printMiddleFromStack(s, count, totalSize);




    return 0;
}