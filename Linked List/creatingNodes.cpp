#include<bits/stdc++.h>
using namespace std;

//create node class
//node class object=element of ll
class Node{
    public:
    int data;
    Node *next;

//create constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

int main(){

    //create static object
    Node n1(1);

    //declaring a pointer variable of type Node to store head node address
    //the pointer variable is of type node because it points to another node
    Node *head=&n1;

    Node n2(2);

    //connect the nodes
    n1.next=&n2;
    
    //current linled list
    //1->2
    cout<<n1.data<<"->"<<n2.data<<endl;
    cout<<head->data; //o/p same as n1.data

    //create node dynamically
    Node *n3=new Node(10);
    Node *head=n3;
    
    Node *n4=new Node(20);

    //connect the nodes
    n3->next=n4;

}