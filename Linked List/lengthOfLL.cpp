#include<bits/stdc++.h>
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

//TC=O(n)   SC=O(1)
int length(Node *head){
    int count=0;
    Node* temp=head;
    //while(temp->data != -1) or
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    int data;
    cin>>data;
    Node* head=new Node(data);
    int size=length(head);
    return 0;
}

