#include<iostream>
using namespace std;


//Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
int power(int x,int n){
    if(n==0)
    return 1;
    return x*power(x,n-1);
}


//Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
void print(int n){
    if(n==0)
    return;
    print(n-1);
    cout<<n<<endl;
    
}

//You are given a number 'n'. Return number of digits in ‘n’.
int numberofDigits(int n){
    if(n==0)
    return 0;
    return 1+numberofDigits(n/10);
}

int main(){
    int x,n;
    cin>>x;
    cin>>n;
 
    cout<<power(x,n)<<endl;
    
    int m;
    cin>>m;
    print(m);

    int z;
    cin>>z;
    cout<<numberofDigits(z)<<endl;;

    return 0;
}