#include<iostream>
#include<stack>
#include<queue>

using namespace std;


// void reversequeue(queue<int>&q){
//     stack<int>st;

//     while(!q.empty()){
//         int frontEle=q.front();
//         q.pop();

//         st.push(frontEle);
//     }

//     while(!st.empty()){
//         int topS=st.top();
//         st.pop();

//         q.push(topS);
//     }

// }

void reversequeue(queue<int>q){
    if(q.empty()){
        return;
    }

    int temp = q.front();
    q.pop();

    reversequeue(q);

    q.push(temp);
}


int main(){

    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reversequeue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop(); 
    }

}