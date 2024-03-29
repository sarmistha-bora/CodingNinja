/*
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
*/

#include<iostream>
using namespace std;

int lastIndex(int input[], int n, int x){

    //base
    if(n==0)
        return -1;


    //recursion
    int ans=lastIndex(input+1,n-1,x);

    //check
    if(ans==-1){
        if(input[0]==x)
            return 0;
        else 
            return -1;
    }
    else
        return 1+ans;

    /*
    OR
    //check

    if(ans!=-1)
    return ans+1;

    if(input[0]==x)
    return 0;

    return -1;
    */
}

int main(){
    int n,x;
    cin>>n>>x;

    int *input= new int[n];
    for(int i=0;i<n;i++)
    cin>>input[i];

    cout<<lastIndex(input,n,x);
}