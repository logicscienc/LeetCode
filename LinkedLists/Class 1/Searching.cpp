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

bool searchInLinkedList(int target, Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        if(temp->data == target)
        {
            return true;
        }
        else{
            // go to next node
            temp = temp->next;
        }


        // agar main yaha tak pohoch gya, iska matleb maine poori linked list travel keli and target nhi mila

       
    }
     return false;
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


    cout<<searchInLinkedList(30, head);






    return 0;
}