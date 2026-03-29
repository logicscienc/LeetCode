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

// this function return the head of the updated linked list
void InsertAtHead(int value, Node* &head, Node* &tail)
{


    if(head == NULL && tail == NULL)
    {
        // empty ll
        // step 1: create a new Node
        Node* newNode = new Node(value);
        // step2: point head and tail on that new node
        head = newNode;
        tail = newNode;
    }

    else{
        // non empty linked list
        // step create a new node
        Node* newNode = new Node(value);
        // step 2: link the new node to the original linked list
        newNode->next = head;

        // step 3: Update head to the first node
        head = newNode;
    }



    // return the head of the updated linked list
    //return head;
}

void printLinkedList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}









int main()
{
    // Empty linked list
    Node* head = NULL;
    Node* tail = NULL;


    InsertAtHead(10, head, tail);
    InsertAtHead(20, head, tail);

    printLinkedList(head);





    return 0;
}