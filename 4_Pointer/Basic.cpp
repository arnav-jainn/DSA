#include<iostream>
using namespace std;

int main(){
    int a=9;
    cout<<"Value stored in a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;

//Creation of a pointer
    int * ptr=&a;
    cout<<"Address of A stored in pointer ptr: "<<ptr<<endl;

//Accessing the value stored at address stored in ptr
    cout<<"Value at the stored address in ptr"<<*ptr<<endl;

    cout<<"Address of the pointer"<<&ptr<<endl;
}