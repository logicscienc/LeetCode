 #include<iostream>
 #include<vector>
 #include<string>
using namespace std;

int searchTarget(vector<int>& arr, int size, int index, int target)
{
    // Base case
    if(index >= size)
    {
        return -1;
    }
    if(arr[index] == target)
    {
        return index;
    }

    int nextIndex = searchTarget(arr, size, index+1, target);
    return nextIndex;
}

int main() {
    vector<int> num = {1,2,3,4,5};
    int size = num.size();

    int index = 0;

    int target = 3;
    cout<<searchTarget(num, size, index, target)<< endl;

    return 0;

}