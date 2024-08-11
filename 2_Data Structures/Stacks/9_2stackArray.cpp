//2 stacks in an Array

#include<iostream>

using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
     
     Stack(int size){
        arr=new int(size);
        this->size=size;
        this->top1=-1;
        this->top2=size;
     }

     void push1(int data){
        if(top2-top1==1){
            //no space
            cout<<"OVERFLOW";
        }else{
        top1++;
        arr[top1]=data;
        }
     }

     void push2(int data){
        if(top2-top1==1){
            cout<<"OVERFLOW";
        }else{
        top2--;
        arr[top2]=data;
        }
     }
     void pop1(){
        if(top1==-1){
            cout<<"UNDERFLOW";
        }else{
        arr[top1]=0;
        top1--;
        }
     }
     void pop2(){
        if(top2==size){
            cout<<"UNDERFLOW";
        }else{
        arr[top2]=0;
        top2++;
        } 
     }
};

int main(){
    Stack st(8); 
}