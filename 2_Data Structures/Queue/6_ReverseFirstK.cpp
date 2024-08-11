//reverse first K elements of queue

#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void reverseK(queue<int>&q,int k){
    stack<int>st;
    int n=q.size();

    if(k>n || k==0){
        return
    }
    //push first K elements from queue to stack
    for(int i=0;i<k;i++){
        int temp=q.front();
        q.pop();
        st.push(temp);
    }

    //push all the elememts back to queue to reverse them
    while(!st.empty()){
        int top = st.top();
        st.pop();
        q.push(top);
    }

    //pop and push n-k element from starting to end
    for(int i=0;i<(n-k);i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20); 
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseK(q,4);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}