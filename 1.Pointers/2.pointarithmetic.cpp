//increment and decrement of pointers using arithmetics

#include<iostream>
using namespace std;

int main(){
    //pointer size is usually same be it integer pointer. char pointer , .....
    int i=5;
    int *p=&i;
    cout<<sizeof(p)<<endl;

    cout<<i<<endl;
    (*p)++;//i=6
    cout<<i<<endl;


    cout<<sizeof(int)<<endl;
    cout<<p<<endl;
    p++;//p+sizeof(int)
    cout<<p<<endl;
    //it points to the next integer


    p=p+4;//p+4*sizeof(int)
    cout<<p<<endl;


    //similarly we can do subtraction
    p--;
    cout<<p<<endl;
    int *p2=p-1;
    cout<<p2<<endl;


    //and other operations can be performed
    int j=p<p2;
    cout<<j<<endl;

    //same thing we can do for other pointers like char, double, etc
    //this is helpful in array
}