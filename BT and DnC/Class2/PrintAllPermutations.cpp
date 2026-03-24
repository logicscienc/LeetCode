#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;

void printAllpermutations(string &s, int i)
{
    //    base case
    if(i>=s.length())
    {
        cout<<s<<endl;
        return;
    }

    // 1. case solve kare
    for(int j=i; j<s.length(); j++)
    {
        swap(s[i], s[j]);
        printAllpermutations(s, i+1);

        // backtracking
        swap(s[i], s[j]);
    }

}


int main()
{
       string s="abc";
       int i=0;
       printAllpermutations(s, i);



       return 0;
}