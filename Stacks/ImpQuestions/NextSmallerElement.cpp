#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;



void solve(stack<int>& s, vector<int>& arr, vector<int>& ans)
{
    int n=arr.size();
    // moving from right to left
    for(int i=n-1; i>=0; i--)
    {
        int element = arr[i];
        // is element k liye stack check krne jaana h
       while(s.top() >= element)
       {
        s.pop();
       }

    //    jab main yaha pohochunga, iska mtlb, k apke stack top pr pakka koi chotta element pada hua h.

    ans.push_back(s.top());
    s.push(element);
        
    }

}



int main()
{
    // input vector
    vector<int> v;

    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);


    stack<int> s;
    s.push(-1);
    vector<int> ans;

    solve(s, v, ans);
    reverse(ans.begin(), ans.end());
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

    return 0;


}