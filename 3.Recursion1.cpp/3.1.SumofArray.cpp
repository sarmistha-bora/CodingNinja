#include<iostream>
using namespace std;

//n=1 to 10^3

int sum(int input[],int n){
    if(n==1)
    return input[0];

    return input[0]+sum(input+1,n-1); 
}

int main(){
    int n;
    cin>>n;
    int *input=new int[n];

    for(int i=0;i<n;i++)
    cin>>input[i];

    cout<<sum(input,n);
}