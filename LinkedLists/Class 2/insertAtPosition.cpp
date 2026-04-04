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

int getLength(Node* &head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    return count;
}

void insertAtTail(int value, Node* &head, Node* &tail)
{
    // 2 case-> LL is empty or non empty
    if(head==NULL && tail==NULL)
    {
        Node* newNode = new Node(value);

        head=newNode;
        tail=newNode;
    }

    else{
        Node* newNode = new Node(value);
       tail->next=newNode;
       newNode->prev=tail;
       tail=newNode;

    }
}


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
       Node* newNode= new Node(value);
       newNode->next=head;
       head->prev=newNode;
       head=newNode; 
    }
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail)
{
    //  3 cases-> leftmost end, rightmost end, middle me insert krna chata hu.
    int len=getLength(head);
    if(position==1)
    {
        // insert leftmost me karna chahta hu
        insertAtHead(value, head, tail);
    }

    else if(position==len+1)
    {
        insertAtTail(value, head, tail);
    }
    else
    {
        // insert in the middle
       
        Node* temp = head;
        for(int i=1; i<position-1; i++)
        {
            temp = temp->next;
        }
         Node* newNode = new Node(value);
         Node* forward=temp->next;
         newNode->prev=temp;
         temp->next=newNode;
         forward->prev=newNode;
         newNode->next=forward;
        
    }
}
void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<"NULL" <<endl;
}

void printReverse(Node* tail)
{
    Node* temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

    cout<<"NULL" <<endl;
}


int main()
{
       Node* head = NULL;
       Node* tail = NULL;
        insertAtTail(10, head, tail);
      insertAtTail(20, head, tail);
      insertAtTail(30, head, tail);
      insertAtTail(40, head, tail);
      insertAtTail(50, head, tail);
      print(head);

      insertAtPosition(6, 100, head, tail);
      print(head);
      

       

    return 0;
}