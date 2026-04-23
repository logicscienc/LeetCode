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


// returns the middle node of the LL
Node* getMidNode(Node* head)
{
    Node* slow=head;
    Node* fast=head;


    // agar fast k pass 2 step aage badhne ka chance hai tabhi mai slow and fst ko aage badhaunga, nhi tho loop se bahar nikal.

    while(fast!=NULL && fast->next !=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

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
      Node* mid = getMidNode(head);
      cout<<"Mid node is: "<<mid->data<<endl;
     

       

    return 0;
} 