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

int main(){

    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    insertSorted(st,25);

    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}