#include <iostream>
using namespace std;

void print(int* p){
    cout<<*p<<endl;
}

void incrementPointer(int* p){
    p=p+1;
}

void incrementValue(int* p){
    (*p)++;
}

int main(){
    int i=10;
    int* p=&i;

    print(p);// 10
    incrementPointer(p);//only a copy of p goes
    print(p);//10, no change in o/p
    incrementValue(p);
    print(p);//11

}