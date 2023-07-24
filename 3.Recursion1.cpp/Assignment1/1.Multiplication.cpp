/*
Given two integers M & N, 
calculate and return their multiplication using recursion. 
You can only use subtraction and addition for your calculation.
No other operators are allowed.
3*5 is 5+5+5(3 times)
*/

#include <iostream>
using namespace std;

int multiply(int m,int n){
    if(n==0 || m==0)
        return 0;
    
    return m+multiply(m,n-1);
}

int main(){
    int m, n;
    cin>>m>>n;

    cout<<multiply(m,n)<<endl;
}