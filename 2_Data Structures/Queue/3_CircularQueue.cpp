#include<iostream>

using namespace std;

class Cqueue{
    public:
        int *arr;
        int size;
        int front;
        int rear;

        Cqueue(int size){
            arr=new int(size);
            this->size=size;
            front=-1;
            rear=-1;
        }

        void push(int data){
            if((front==0 && rear==size-1) || (rear==front-1)){
                //overflow
                cout<<"overflow";
            }else if(front==-1 && rear==-1){
                //empty queue
                front++;
                rear++;
                arr[rear]=data;
            }else if(rear==size-1 && front!=0){
                //circular queue
                rear=0;
                arr[rear]=data;
            }else{
                //normal
                rear++;
                arr[rear]=data;
            }
        }

        void pop(){
            if(front==-1 && rear==-1){
                //underflow
                cout<<"underflow";
            }else if(front==rear){
                //single element
                arr[front]=-1;
                front=-1;
                rear=-1;
            }else if(front==size-1){
                //circular
                arr[front]=-1;
                front=0;
            }else{
                arr[front]=-1;
                front++;
            }
        }
};