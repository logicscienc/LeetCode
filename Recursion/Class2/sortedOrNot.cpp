#include<iostream>
#include<vector>
using namespace std;

bool checkArraySorted(int arr[], int size, int index) {
    // base case
    if(index == 0)
    {
        return true;
    }

    if(arr[index] < arr[index-1])
    {
        // sorted naji h.
        return false;
    }
    else{
        // current element toh sorted hai, but aage ka recursion bataega.
        bool recursionKaAns = checkArraySorted(arr, size, index-1);
        return recursionKaAns;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = size - 1;

    bool ans = checkArraySorted(arr, size, index);

    cout<<"Sorted or not: "<<ans <<endl;

    return 0;
}