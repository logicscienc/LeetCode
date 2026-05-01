#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int capacity)
    {
        arr = new int[capacity];
        top = -1;
        size = capacity;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    int getSize()
    {
        return top + 1;
    }

    void pop()
    {
        // normal removal
        if (top == -1)
        {
            // empty stack
            cout << "stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int isEmpty()
    {
        if (top == -1)

        {
            // empty stack
            return true;
        }
        else
        {
            return false;
        }
    }

    int getTopElement()
    {

        if(top==-1)
        {
            cout<<"empty stack"<<endl;
            return -1;
        }

        else{
            return arr[top];
        }
    }
};

int main()
{

    Stack s(100);
    s.push(10);
     s.push(20);
      s.push(30);

      cout<<s.getSize()<<endl;

      cout<<s.getTopElement()<<endl;

      s.pop();

      cout<<s.getSize()<<endl;
      cout<<s.getTopElement()<<endl;





      return 0;






}