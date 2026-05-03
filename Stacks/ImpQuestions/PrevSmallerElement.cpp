#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;



void solve(int arr[], int n, vector<int>& ans)
{
      stack<int> s;
      s.push(-1);


    //   fark sirf ioss wale loop ka h
    // moving from left to right
    for(int i=0; i<n; i++)
    {
        int element = arr[i];

        while(s.top() > element)
        {
            s.pop();
        }

        // yaha agye mtlb stack top koi chotta element h
        ans.push_back(s.top());
        s.push(arr[i]);
    }
}



int main()
{
    // input 
    int arr[] = {8,4,6,2,3};
    int n=5;
    vector<int> ans;

    solve(arr, n, ans);



    // reverse(ans.begin(), ans.end());
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

    return 0;


}