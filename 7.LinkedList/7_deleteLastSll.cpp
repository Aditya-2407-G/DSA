#include <bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;

    Node(int x){

        data = x;
        next = NULL;
    }
};

void print(Node* head){

    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* delLast(Node* head){

    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node* curr = head;

    while(curr->next->next != NULL){
        curr = curr-> next;
    }
    delete (curr->next);

    curr->next = NULL;
    return head;
}

// USING 2 POINTERS 

Node* delEnd(Node* head){

    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* curr = head;
    Node* prev = NULL;

    while(curr->next != NULL){
        prev = curr;
        curr= curr->next;
    }
    prev->next = NULL;
    delete curr;
}

int main(){
    Node* head = new Node (10);

    head->next = new Node (20);

    head->next->next = new Node(30);

    head->next->next->next = new Node(40);

    print(head);
    cout<<endl;
    delEnd(head);
    print(head);
    
    return 0;
}