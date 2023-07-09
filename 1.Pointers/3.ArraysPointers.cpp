#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;

    //a = &a, so a is pointer that points to a[0]
    //*a=a[0]
    //*(a+i)=a[i]
    //a[i]=i[a]            //because i[a] is also *(i+a)

    a[0]=5;
    cout<<*a<<endl;
    cout<<a[0]<<endl;

    a[1]=10;
    cout<<*(a+1)<<endl;
    cout<<a[1]<<endl;

    a[2]=15;
    cout<<*(a+2)<<endl;
    cout<<2[a]<<endl;
    
//DIfference between pointer p and pointer to array a

    //1. size of a is 4*10=40 or 80 i.e array size nothing extra allocated to a, size of p is 4 or 8 bytes
    cout<<sizeof(a)<<endl;
    int *p= &a[0];
    cout<<sizeof(p)<<endl;

    //2. address of p is some allocated address, a is same as a[0] no extra address
    cout<<&p<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<&a[0]<<endl;

    //3. Reassignment

    //possible
    p=a;
    p=&a[3];
    p=p+1;
    p=a+1;//but not p=a++;


    /*
    not possible/allowed will give error
    a=p;
    a=a+3;
    a++;
    */


   int c[6]={1,2,3};
   int *b=c;
   cout<<b[2]<<endl;


}