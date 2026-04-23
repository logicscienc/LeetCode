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


void reverseLinkedList(Node* &head) {
    // empty LL

    if(head == NULL)
    {
        return;
    }

    // setting up prev and curr
    Node* prev = NULL;
    Node* curr = head;

    // updating links
    while(curr != NULL)
    {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    // update head
    head = prev;
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
      reverseLinkedList(head);

      cout<<endl;
      print(head);

       

    return 0;
} 