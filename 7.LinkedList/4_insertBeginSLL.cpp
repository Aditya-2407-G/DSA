#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;

    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void traversal(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* insertBegin(Node* head, int x){

    Node* temp = new Node (x);
    temp ->next = head;

    return temp;
}

Node* insertEnd(Node* head , int x){

    Node*temp = new Node(x);

    if(head==NULL){
        return temp;
    }

    Node*  curr = head;

    while(curr->next != NULL){
        curr= curr->next;
    }
    curr->next = temp;

    return head;
}

int main()
{
    Node* head = NULL;

    head= insertBegin(head, 30);
    head= insertBegin(head, 20);
    head= insertBegin(head, 10);

    head= insertEnd(head , 4);

    traversal(head);

    return 0;
}