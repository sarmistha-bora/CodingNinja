//0 1 1 2 3 5 8 13 21 34
//0th ........nth fibonacci

#include<iostream>
using namespace std;

int fibonacci(int i){
    if(i==0 or i==1)
        return i;
    return fibonacci(i-1)+fibonacci(i-2);
    
}


int main(){
    int i;
    cin>>i;
    cout<<fibonacci(i);

}