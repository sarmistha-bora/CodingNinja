/*
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
*/
#include<iostream>
using namespace std;

int firstIndex(int input[],int size, int x){
    int ans;

    //base
    if(size==0)
        return -1;

    //check
    if(input[0]==x)
        return 0;
    
    //recursion
    ans=firstIndex(input+1,size-1,x);
     if(ans==-1)
        return -1;
    return 1+ans;
}

int main(){
    int size;
    cout<<"size of array"<<endl;
    cin>>size;

    int *input= new int[size];
    cout<<"enter array values"<<endl;
    for(int i=0;i<size;i++)
    cin>>input[i];

    int x;
    cout<<"enter value of x"<<endl;
    cin>>x;

    cout<<"first index where x appears is "<<firstIndex(input,size,x)<<endl;


}
