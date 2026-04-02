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

void insertAtHead(int value, Node* &head, Node* &tail)
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

void deleteFromPosition(int position, Node* &head, Node* &tail)
{
    // invalid cases
    int length=getLengthOfLinkedList(head);

    if(position > length)
    {
        return;
    }

    if(head==NULL && position == 1)
    {
        Node* temp = head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }

    // LL have multiple nodes but position is 1
    if(position==1)
    {
        Node* temp = head;

        head=head->next;
        temp->next=NULL;
        delete temp;
        return;

    }
    else{
        // either you are delete middle nodes or the last node
        // step1: setup current/previous/forword pointers
        Node* previous = head;
        for(int i=1; i<=position-2; i++)
        {
            previous=previous->next;
        }

        Node* current=previous->next;
        Node* forword=current->next;

        // update links
        current->next=NULL;
        previous->next=forword;
        // current is isolated now
        delete current;

    }
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

    deleteFromPosition(3, head, tail);

     printLinkedList(head);




    






    return 0;
}