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

Node* reverseLLRecursive(Node* &head, Node* prev){
    // base case : when current comes to NULL that mean ll is reversed new. and that is why we are returning prev because prev is the new head of reversed LL
    if(head == NULL)
    {
        return prev;
    }

    
     

    //  1 case main solve karunga
    Node* curr = head;
    Node* forward = curr->next;

    curr-> next = prev;
    // ab tak main 1 node ko reverse krlia h
    // baaki recursion sambhal lega

    return reverseLLRecursive(forward, curr);
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
    cout<<endl;
     Node* prev = NULL;
      head = reverseLLRecursive(head, prev);
     

      print(head);

     

       

    return 0;
} 