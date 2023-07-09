#include <iostream>
using namespace std;

int sizeCheck(int a[],int size){
    cout<<sizeof(a)<<endl;//will be 8 because a here is a pointer
    //'sizeof' on array function parameter 'a' will return size of 'int*' 
    //so we can treat it as a pointer itself only, and pass it the same way, because it is getting passed like a pointer only
    return 0;
}

int sum(int* a, int size){
    int ans=0;
    for(int i=0; i<size;i++){
        ans+=a[i];//a[i]=*(a+i)
    }
    return ans;
}


int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<sizeof(a)<<endl;//will give size of whole array here
    sizeCheck(a,10);
    cout<<sum(a,10)<<endl;

    //so we can send part of an array since it gets passed as a pointer, so using pointer arithmetic
    cout<<sum(a+4,6)<<endl; 
    return 0;
}