#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//print ith node
void print(Node *head, int i){
    Node *temp=head;
    int count=0;
    while(temp->data!=-1){
         if(i==count){
            cout<<temp->data;
            return;
         } 
    temp=temp->next;
    count++;
    }
   
}
