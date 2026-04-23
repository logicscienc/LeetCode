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

void deleteFromPosition(int position, Node* &head, Node* &tail)
{ 

    int length=getLength(head);
    // LL is empty
    if(head==NULL && tail==NULL)
    {
        cout<<"no nodes to delete"<<endl;
        return;
    }
    else if(head==tail)
    {
        // single node to delete
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else if(position==1)
    {
        // we want to delete the head node
        Node* temp = head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else if(length==position)
    {
        // we want to delete any other node than head and tail node
        Node* temp=tail;
        tail=temp->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        // we want to deleteany other node than head
        Node* backward=head;
        
        for(int i=0; i<position-2; i++)
        {
            backward=backward->next;
        }
        Node* curr=backward->next;
        Node* forward=curr->next;

        // pointers change
        backward->next=forward;
        forward->prev=backward;

        // curr ko isolate karna h
        curr->prev=NULL;
        curr->next=NULL;

        // curr isolate ho chuka h
        delete curr;

    }
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

       

    return 0;
}