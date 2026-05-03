#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void insertSorted(stack<int> &s, int value)
{
    // base case
    if (s.empty())
    {
        s.push(value);
        return;
    }

    // ek case hum, baaki recursion
    if (value >= s.top())
    {
        s.push(value);
        return;
    }
    else
    {
        // value>s.top()
        int topValue = s.top();
        s.pop();
        // recursion
        insertSorted(s, value);
        // backtrack
        s.push(topValue);
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    insertSorted(s, 25);

    cout << "Printing stack: " << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}