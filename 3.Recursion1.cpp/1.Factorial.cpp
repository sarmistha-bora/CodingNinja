//A function that calls itself
//A problem whose solution depends on a smaller problem

int factorial(int n){
    if (n == 0)
    return 1;

    return n*factorial(n-1);
}

//based on PMI (Principle of mathematical induction)
//1. Base case: prove F(0) or F(1) is true
//2. Assume that it will work for the smaller problem
//3. then it will work on the main big problem

#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
 }