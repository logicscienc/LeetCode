#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;


void insertAtBottom(stack<int> &s, int value)
{
            //   base case
            if(s.empty())
            {
                s.push(value);
                return;
            }




            // ek case main solve karunga , bakki recursion
            int topValue=s.top();
            s.pop();

            // recursion
            insertAtBottom(s, value);

            // wapas, backtracking.
        s.push(topValue);



}


void reverseStack(stack<int>& s)
{
    // base case
    if(s.empty())
    {
        return;
    }

    // ek case main solve krunga and baaki recursion
    int value = s.top();
    s.pop();

    // recursion
    reverseStack(s);

    // wapis backtracking
    insertAtBottom(s, value);
}











int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
         s.pop();
    }




    return 0;
}