#include<iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;


        queue(int size){
            arr=new int[size];
            this->size=size;
            front=-1;
            rear=-1;
        };

        void push(int data){
            //overflow
            if(rear==size-1){
                cout<<"overflow";
            }else if(front==-1 && rear==-1){
            //empty case
                front++;
                rear++;
                arr[rear]=data;
            }
            else{
                rear++;
                arr[rear]=data;
            }
        }

        void pop(){
            //underflow
            if(front==-1 && rear==-1){
                cout<<"underflow";
            }else if(front==rear){
            //single element
                arr[rear]=-1;
                front=-1;
                rear=-1;
            }else{
                arr[front]=-1;
                front++;
            }
        }

        bool isEmpty(){
            if(front==-1 && rear==-1){
                return true;
            }else{
                return false;
            }
        }

        int getSize(){
            if(front==-1 && rear ==-1){
                retrun 0;
            }else
            return rear-front+1;
        }

        int getFront(){
            if(front==-1){
                cout<<"underflow";
                return -1;
            }else{
            return arr[front];
            }
        }

        int getrear(){
            if(rear==-1){
                cout<<"underflow";
                return -1;
            }else{
            return arr[rear];
            }
        }

        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    queue q(10);
    // q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.print();

}