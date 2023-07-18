#include<iostream>
using namespace std;

//Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.

bool check(int *input, int size,int x){
    if(size==0)
    return false;

    if(input[0]==x)
    return true;

    return check(input+1,size-1,x);
}


int main(){
    int n;
    cin>>n;

    int x;
    cin>>x;

    int *input=new int[n];

    for(int i=0;i<n;i++)
    cin>>input[i];

    cout<<check(input,n,x)<<endl;

}