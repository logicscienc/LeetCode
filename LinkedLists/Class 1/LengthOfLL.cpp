#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;



class Node{
    public:
     int data;
     Node* next;



    //  Constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void InsertAtTail(int value, Node* &head, Node* &tail)
{

    // empty ll
    if(head == NULL && tail == NULL)
    {
        // step1: create a new node
        Node* newNode = new Node(value);
        // step 2: point head and tail on the new node
        head = newNode;
        tail = newNode;
    }
    else{

        // non empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }

    // return head;
}

void printLinkedList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}


int getLengthOfLinkedList(Node* head)
{
    int len=0;

    Node* temp = head;

    while(temp != NULL)
    {
        len++;

        // move to next node
        temp=temp->next;
    }

    return len;
}







int main()
{
    // Empty linked list
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail(10, head, tail);
    InsertAtTail(20, head, tail);
    InsertAtTail(30, head, tail);
    InsertAtTail(40, head, tail);
    InsertAtTail(50, head, tail);

    printLinkedList(head);

    cout<<"Length of linked list is:" <<getLengthOfLinkedList(head);


    






    return 0;
}