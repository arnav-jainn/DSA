//insert in a sorted stack

#include<iostream>
#include<stack>

using namespace std;

void insertSorted(stack<int>&st,int element){
    //base case
    if(st.empty() || element>st.top()){
        //yha glti hoti h check krna h agr stack empty h to top kaise check kr paenge
        st.push(element);
        return;
    }

    //jo case humme smbhalna h
    int temp=st.top();
    st.pop();

    // recursion
    insertSorted(st,element);

    //backtrack
    st.push(temp);

}

void sortStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }

    //jo case hum kr rh h 
    int temp=st.top();
    st.pop();

    //recursion
    sortStack(st);

    //backtrack
    insertSorted(st,temp);

}

int main(){

    stack<int>st;

    st.push(100);
    st.push(0);
    st.push(300);
    st.push(50);
    st.push(400);
    st.push(250);

    // insertSorted(st,25);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    sortStack(st);

        // insertSorted(st,25);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}