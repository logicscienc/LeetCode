#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;

void minElement(vector<int>& arr, int size, int index, int & mini)
{
    if(index>=size)
    {
        return;
    }
    if(arr[index]<mini)
    {
        mini=arr[index];
    }

    minElement(arr, size, index+1, mini);

}

int main()
{
    vector<int> num = {5,2,7,10,4};

    int size = num.size();
    int index = 0;
    int mini = INT_MAX;

    minElement(num, size, index, mini);
    cout<<"minimum elemnt"<<" "<<mini;

    return 0;
}