#include<iostream>
using namespace std;


void incrementDoublePointer(int** p){
    p=p+1;
}

void incrementPointer(int**p){
    *p=*p+1;
}

void incrementBaseInteger(int **p){
    **p=**p+1;
}

int main(){
    int i=10;
    int* p=&i;
    int* *p2=&p;

    cout<<p2<<endl;
    cout<<&p<<endl;

    cout<<p<<endl;
    cout<<&i<<endl;
    cout<<*p2<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;


    incrementDoublePointer(p2);
    cout<<p2<<endl;//p2=&p, no chnage
    incrementPointer(p2);
    cout<<p<<endl;//p=&i, change
    p=&i;
    p2=&p;
    incrementBaseInteger(p2);
    cout<<i<<endl;//value of i, change
    return 0;
}