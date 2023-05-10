#include <bits/stdc++.h>
using namespace std;

// insert at given position in singly linked list

struct Node{

    int data;

    Node* next;

    Node(int x){

        data = x;
        next = NULL;
    }
};

Node* insertPos(Node* head, int pos, int data){

    Node* temp = new Node(data);

    if(pos ==1 ){

        temp->next = head;

        return temp;
    }

    Node* curr = head;

    for(int i =1; i< pos-1 && curr != NULL; i++){

        curr = curr-> next;
    }
    if(curr== NULL){

        return head;
    }
    temp->next = curr->next;
    curr->next = temp;

    return head;
}

void display(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
}


int main(){

    Node* head = new Node (10);

    head->next = new Node (20);

    head->next->next = new Node(30);

    head->next->next->next = new Node(40);

    insertPos(head,4, 35);

    display(head);
    
    return 0;
}



