#include<iostream>
using namespace std;

bool isSorted(int a[], int size){
    //base
    if (size==0 or size==1)
    return true;

    //check
    if(a[0]>a[1])
    return false;

    //reccursion call
    return isSorted(a+1,size-1);

    /*
    This above code will check from 0..1...2...nth element
    to start check from nth element.....2..1..0
    we have to use the order
    1.base
    2.reccursion call
    3.check
    */
}

int main(){
    int n;
    cin>>n;

    int *input=new int[n];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    cout<<isSorted(input,n)<<endl;

}