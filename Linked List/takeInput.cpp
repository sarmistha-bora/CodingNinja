#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

/*INPUT FUNCTION-I
take input till -1
take ll from user and return the head to main when called
*/
//O(n2)
Node *takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    while(data!=-1){
      //  Node n(data);
//will not use this static allocation becaue the node clear up when it gets out of scope
//i.e when it goes out of the while loop
        Node *newNode =new Node(data);
        //for first node
        if(head==NULL){
            head=newNode;
        }
        //traverse the ll and find the last node
        else {
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            //connect prev last node to new node
            temp->next=newNode;
        } 
        cin>>data;
    }
    return head;
}



//INPUT FUNCTION -II
//Using head and tail pointer 
//O(n)
Node* takeInputBetter(){
    int data;
    Node* head=NULL;
    Node* tail=NULL;
    cin>>data;
    while(data!=-1){
        Node* newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
            //or tail=newNode;
        }
        cin>>data;
    }
    return head;
}



void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
    }
}

int main(){
    Node *head=takeInput();
    print(head);
    return 0;
}