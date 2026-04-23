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

bool checkPalindromeLL(Node* head)
{
    // setp 1: find length of LL
    int len = getLengthOfLinkedList(head);
    
   // step 2: find mid
   Node* mid = getMidNode(head);


    // step 3: update mid as per even/odd length, even length me mid as it is use krna h and odd case me main finalMid, mid->next ko lunga

    Node* finalMid = NULL;
    if(len & 1)
    {
        // odd
        finalMid = mid->next;
    }
    else{
        // even
        finalMid = mid;
    }

    // step 4: reverse All starting from mid node
    reverseLinkedList(finalMid);
    // now i have 2 linked list with starting pointer as head and finalMid
    // compare and return true/false;
    Node* temp = head;
    while(temp != NULL && finalMid != NULL)
    {
        if(temp->data != finalMid->data)
        {
            return false;
        }

        // ek step aage badho
        temp = temp->next;
        finalMid = finalMid->next;
    }

    // agar main yaha tak aagya, iska mtlb saare data match hogye
    // palindrome hai
    return true;


}







int main()
{
    // Empty linked list
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail(1, head, tail);
    InsertAtTail(2, head, tail);
    InsertAtTail(3, head, tail);
    InsertAtTail(2, head, tail);
    InsertAtTail(1, head, tail);

    printLinkedList(head);

    cout<<endl;

    cout<<checkPalindromeLL(head);


    






    return 0;
}