#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int value, Node* &head, Node* &tail)
{
    // 2 case-> LL is empty/ non empty
    // empty wala case
    if(head == NULL && tail == NULL)
    {
        // iska matlb, mai first node create krne wala hu
        Node* newNode = new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        // LL is not empty
        
    }
}


int main()
{

}