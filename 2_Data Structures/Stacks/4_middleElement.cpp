#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &st,int &pos,int &ans){
    //base case
    if(pos==1){
        //ans tk pochh gy h or middle element retrun krdia
        ans=st.top();
        return;   //this return is imp
    }

    //jo hum solve kr rh h
    pos--;
    int temp=st.top();
    st.pop();

    //recursion
    solve(st,pos,ans);

    //backtrack
    st.push(temp);
}

int getMiddle(stack<int> &st){
    int size=st.size();
    if(st.empty()){
        return -1;
    }else{
        int pos=0;
        //odd
        if(size&1){
            pos=size/2+1; 
        }else{
        //even
            pos=size/2;
        }

        int ans =-1; 
        solve(st,pos,ans);
        return ans;
        
    }
}

int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int mid = getMiddle(st);
    cout<<"Middle element: "<<mid;
}