#include<iostream>
#include<stack>

using namespace std;

int main(){

//creation
stack<int>st;

//insertion
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);

//size check
cout<<"size of stack is: "<<st.size()<<endl; 

//deletion
st.pop();

//check empty
if(st.empty()){
    cout<<"stack empty"<<endl;
}
else{
    cout<<"non empty"<<endl;
}

cout<<"size of stack is: "<<st.size()<<endl;

//top element
cout<<"top element"<<st.top()<<endl;


}