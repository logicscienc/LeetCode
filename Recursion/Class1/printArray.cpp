 #include<iostream>
 #include<vector>
 #include<string>
using namespace std;


void printArray(vector<int>& arr, int size, int index)
{
    // Base case: If index reaches size, return
    if(index == size)
    {
        return;
    }
    // Print the current index element
    cout<< arr[index]<<" ";

    // Recursive call for the next index
    printArray(arr, size, index + 1);
}

void reversePrint(vector<int>& arr, int size)
{
    if(size == 0)
    {
        return;
    
    }
    cout<<arr[size-1]<<" ";
    reversePrint(arr, size-1);
}
int main() {
    vector<int> num = {1,2,3,4,5};
    int size = num.size();

    int index = 0;

    printArray(num, size, index);
    reversePrint(num, size);

    return 0;

}