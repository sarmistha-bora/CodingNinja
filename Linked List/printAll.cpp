#include<bits/stdc++.h>
using namespace std;

//create Node class
class Node{
    public:
    int data;
    Node *next;

//create constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

//Printing the Linked List
void print(Node *head){
    Node *temp=head;
  //  while(temp->next!=NULL) this condition will not let the last node print
  while (temp!=NULL){
       cout<< temp->data<<endl;
       temp=temp->next;
    }
}

int main(){
    Node n1(1);
    Node *head=&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
//link the nodes
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);

    return 0;
}