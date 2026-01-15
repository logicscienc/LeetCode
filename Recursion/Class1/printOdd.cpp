 #include<iostream>
 #include<vector>
 #include<string>
using namespace std;

void printOdd(vector<int>& arr, int size, int index)
{
    if(index>=size)
    {
        return;
    }

    if(arr[index] & 1) {
        cout<<arr[index]<<" ";
    }

    printOdd(arr,size, index+1);
}

void printEven(vector<int>& arr, int size, int index)
{
     if(index>=size)
    {
        return;
    }

    if(arr[index] % 2 == 0) {
        cout<<arr[index]<<" ";
    }

    printEven(arr,size, index+1);
}

int main()
{
    vector<int> num = {5,2,7,10,4};

    int size = num.size();
    int index = 0;
    printOdd(num, size, index);
    cout<<endl;
    printEven(num, size, index);

    return 0;
}