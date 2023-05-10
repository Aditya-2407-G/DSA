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

int search(Node* head, int x){

    int pos = 1;

    Node* curr = head;

    while(curr != NULL){

        if(curr->data == x){
            return pos;
        }
        else{
            pos++;
            curr= curr->next;
        }
    }
    return -1;
}



int main(){

    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    cout<<search(head, 10);
    
    return 0;
}