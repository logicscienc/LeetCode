 #include<iostream>
 #include<vector>
 #include<string>
using namespace std;

void printDigits(int num)
{
    // base case
    if(num==0)
    {
        return;
    }

    // 1 case solve karte h
    // find out digit and update the number
    int digit = num % 10;
    num = num / 10;

    // recursive call
    printDigits(num);

    // print the digit
    cout<<digit<<" ";
}

int main()
{
    int num = 4312;

    printDigits(num);

    return 0;


}