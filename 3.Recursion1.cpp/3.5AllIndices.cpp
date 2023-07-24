#include <iostream>
using namespace std;


int allIndices(int input[],int n, int x, int output[]){
   
    //base case
    if(n==0)
        return 0;
    
    //recursive call
    int ans=allIndices(input,n-1,x,output);

    //small calculation
    if(input[n-1]==x){
        output[ans]=n-1;
        return ans+1;
    }
    else 
        return ans;
}

int main(){
    int n;
    cin>>n;

    int *input= new int[n];

    for(int i=0;i<n;i++)
    cin>>input[i];

    int x;
    cin>>x;

    int *output=new int[n];

    int size= allIndices(input,n,x,output);

    for(int i=0;i<size;i++)
        cout<<output[i]<<" ";

    delete[] input;
    delete[] output;

}