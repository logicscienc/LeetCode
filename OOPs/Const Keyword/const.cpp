#include<iostream>
using namespace std;

int main()
{
    const int x = 10; // x is constant. 
   // x=20;   //error: assignment of read-only variable 'x

    // cout<<x<<endl;

    // 2. const with pointers
    const int *a = new int(2);  //CONST data, NON-CONST pointer.
    cout<<*a<<endl;

    // *a = 20; //can't change the content of pointer.

    // cout<<*a<<endl;

    int b = 20;
    a=&b;   //pointer itself can be reassigned.
    cout<<*a<<endl;

    return 0;
}