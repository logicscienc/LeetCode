#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void fun() 
{
    string s = "codehelp";
    sort(s.begin(), s.end());
}



int main()
{
    vector<int> v = {3, 4, 1, 2};

    // we don't need to know how the sort function works, we just need to know that it sorts the vector this is abstraction in header files.

    sort(v.begin(), v.end());

    for(auto i : v)
    {
        cout<< i <<endl;

    }

     sort(v.begin(), v.end());
     sort(v.begin(), v.end());
     sort(v.begin(), v.end());

    return 0;
}