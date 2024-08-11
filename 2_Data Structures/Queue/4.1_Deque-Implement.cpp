#include<iostream>

using namespace std;


class Deque{
    public:
        int *arr;
        int size;
        int front;
        int rear;

        Deque(int size){
            arr=new int[size];
            this->size=size;
            front=-1;
            rear=-1;
        }

        void push_back(int val){
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
        void push_front(int val){
            if((front==0 && rear==size-1) || (rear==front-1)){
                //overflow
                cout<<"overflow";
            }else if(front==-1 && rear==-1){
                //empty
                front++;
                rear++;
                arr[front]=val;
            }else if(front==0 && rear != size-1){
                //circular queue
            front=size-1;
            arr[front]= val;
            }else{
                front--;
                arr[front]=val;
            }
        }

        void pop_front(){
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
        }
        void pop_back(){
            if(front==-1 && rear==-1){
                cout<<"underflow";
            }else if(front==rear){
                arr[rear]=-1;
                front=-1;
                rear=-1;
            }else if(rear==0){
                arr[rear]=-1;
                rear=size-1;
            }
            else{
                 arr[rear]=-1;
                 rear--;
            }
        }
      
};

int main(){

}