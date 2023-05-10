#include <bits/stdc++.h>
using namespace std;


struct Node{

    int data;

    Node* prev;
    Node* next;

    Node(int x){

        data=x;

        prev=next=NULL;
    }
};


void display(Node* head){

    Node* temp = head;

    while(temp != NULL ){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverse(Node* head){ 

    if(head == NULL || head->next ==  NULL){
        return head;
    }

    Node* prev = NULL; Node* curr = head;

    while(curr != NULL){

        prev = curr-> prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr= curr->prev;

        prev->prev;
    } 
    return prev->prev;
}
int main(){



    Node* head = new Node(10);

    Node* node1 = new Node(20);

    Node* node2 = new Node (30);

    head->next = node1;
    node1->prev = head;

    node1->next = node2;
    node2->prev = node1;
 
    display(head);
    cout<<endl;
    head = reverse(head);

    display(head);
    
    return 0;
}