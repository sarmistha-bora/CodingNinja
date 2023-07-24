/*Given an integer N, count and return the number of zeros 
that are present in the given integer using recursion*/
#include<iostream>
using namespace std;

int zeroes(int n){
    if(n==0)
    return 1;

    if(n<10)
    return 0;

    int ans=zeroes(n/10);
    if(n%10==0)
        return ans+1;

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<zeroes(n)<<endl;
}

/*
Sample Input 2 :

00010204

Sample Output 2 :

2

Explanation for Sample Output 2 :

Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.

*/