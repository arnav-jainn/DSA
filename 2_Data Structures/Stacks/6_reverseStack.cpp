#include<iostream>
#include<stack>

using namespace std;


void insertAtBottom(stack<int> &st,int &element){
    //base case
    if(st.empty()){
        st.push(element);
        return;
    }

    //jo hum solve kr rh h
    int temp=st.top();
    st.pop();

    // recursion
    insertAtBottom(st,element);

    //backtrack
    st.push(temp);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    //jo hum solve kr rh h
     int temp=st.top();
     st.pop();


     //recusrion

     reverseStack(st);

    //  backtrack
     insertAtBottom(st,temp);

}

int main(){

    stack<int>st;

    st.push(10);
    st.push(20); 
    st.push(30);

reverseStack(st);
    //print
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}