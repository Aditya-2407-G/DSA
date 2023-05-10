#include <bits/stdc++.h>
using namespace std;

struct Node{

    int data;

    Node* next;
    Node* prev;

    Node(int x){

        data = x;

        next=prev=NULL;
    }
};

void display(Node* head){

    Node* temp = head;

    while(temp!= NULL){

        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

Node* insertBegin(Node* head, int x){

    Node* temp = new Node (x);

    if(head==NULL) {return temp; }

    temp->next = head;

    head->prev = temp;

    return temp;

}


int main(){

    Node* head = new Node(10);

    Node* node1 = new Node(20);

    Node* node2 = new Node (30);

    head->next = node1;
    node1->prev = head;

    node1->next = node2;
    node2->prev = node1;

    
    cout<<"Before: ";
    display(head);
    cout<<endl;

    head = insertBegin(head,5);
    cout<<"After: ";
    display(head);
    return 0;
}