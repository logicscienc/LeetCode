#include<iostream>
#include<limits.h>
#include<string>
#include<vector>
#include<stack>

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



int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);



    int value=110;
    insertAtBottom(s, value);

    // print stack
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}