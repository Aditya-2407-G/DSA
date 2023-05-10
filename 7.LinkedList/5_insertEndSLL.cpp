#include <bits/stdc++.h>
using namespace std;

struct Node{

    int data;

    Node* next;

    Node(int x){

        data =x;
        next = NULL;
    }
};

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
}

}

Node* insertEnd(Node* head, int x){

    Node* temp = new Node(x);

    if(head == NULL){
        return temp;
    }

    Node* curr = head;

    while(curr->next != NULL){

        curr = curr->next;
    }
    curr->next = temp;

    return head;
}

int main(){

    Node* head = NULL;

    head = insertEnd(head , 10);
    head = insertEnd(head , 20);
    head = insertEnd(head , 30);
    head = insertEnd(head , 35);

    print(head);
    
    return 0;
}