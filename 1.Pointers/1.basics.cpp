 //Pointers are variables which stores address of other variables
 #include<iostream>
 using namespace std;

 int main(){
    int i;


    //******Printing Address*********
    //1. Using variable and address of operator
    cout<<&i<<endl;
    //2. Using pointer
    int *p=&i; 
    cout<<p<<endl;


    //******Printing Value************
    //1. Using variable
    cout<<i<<endl;
    //2. Using Pointer and Dereference operator
    cout<<*p<<endl;


    //******Incrementing value*******
    //1. Using variable
    cout<<++i<<endl;
    //2. using pointer
    cout<<++(*p)<<endl;
    //i++ is same as (*p)++


    //******Size of pointer usually 8 or 4 bytes depending on 64 bit or 32 bit computer
    cout<<sizeof(p)<<endl;


    //******Initializing another pointer 
    int *q=p;
    /*
    &i--->500
    p---->500
    q---->500
    so,
    *p,*q,i---> same values
    */
    cout<<*q<<endl;


    //******Default value at initialization
    //1. variable
    int j;
    cout<<j<<endl;//garbage  (garbage values can be 0 also)
    j++;//garbage value incremented
    cout<<j<<endl;


    //2. pointer
    int *ptr1;
    cout<<ptr1<<endl;//garbage address 
    //cout<<*ptr1<<endl;//can be ROM, out of access or dangerous to temper with(gives segmentation fault so commented)

    //so atleast initialize to 0 so that there is segmentation error but not dangerous
    int *ptr2=0;
    //or best case initialize to the variable
    int *ptr3=&i;


 }