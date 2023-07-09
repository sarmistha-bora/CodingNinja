#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3};
    char c[]="abc";//a,b,c,\0

    cout<<a<<endl;// o/p &a[0]
    cout<<c<<endl;// o/p abc i.e prints till null

    //similarly is we take a chracter pointer that points to a char array
    char *cp=&c[0];
    cout<<cp<<endl;//prints till null
    cp=c+1;
    cout<<cp<<endl;

    char x='a';
    char *y=&x;

    cout<<x<<endl;
    cout<<y<<endl;//prints till it encounters null
    cout<<*y<<endl;

    cout<<&c<<endl;//only this will give address
    cout<<&c[0]<<endl;//will give values till null
    cout<<&c[1]<<endl;//will give values from a[1] till null

    char str[]="abcde";//appropriate way
   // char *ptr="abcde";// will give error because may access ROM

}   