#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool checkSorted(stack<int> &s, int prev)
{
    // base case
    if (s.empty())
    {
        return true;
    }

    // ek case main solve karungi or baki recursion
    int next = s.top();

    if (next < prev)
    {
        // not sorted
        return false;
    }
    else
    {
        // next >= prev -> sorted

        // pop top wala element
        s.pop();
        // prev move to next
        prev = next;

        // recursion
        return checkSorted(s, prev);
    }
}

int main()
{
    stack<int> s;

    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int prev = INT_MIN;

    cout << checkSorted(s, prev);

    return 0;
}