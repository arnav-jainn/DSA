#include<iostream>

using namespace std;

class Stack{

    int *arr;
    int size;
    int top;


public:
    Stack(int size){
        arr= new int [size];
        this->size=size;
        this->top=-1;

    }

    void push(int data){
        if(top==size-1){
            cout<<"stack oveflow";
            return;
        }else{
        top++;
        arr[top]=data;
        } 
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow";
            return;
        }else{
        top--;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"Stack empty";
            return -1;
        }else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    //print ni hota h stack me but sikhne k lie kr rh h 
    void print(){
        cout<<"Top: "<< top<<endl;
        cout<<"Top element: "<<getTop()<<endl;
        for(int i=0;i<getSize();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;

    }
};
 
int main(){

    Stack st(8);

    st.push(10);
    st.print();

    st.push(20);
    st.print();
    
    st.push(30);
    st.print();

    st.push(40);
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();
}