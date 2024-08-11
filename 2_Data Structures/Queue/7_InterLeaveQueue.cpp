#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void Interleave(queue<int>&first){
    queue<int>second;
    int size=first.size();

    //Push first half of first queue into second
    for(int i=0;i<size/2;i++){
        int temp=first.front();
        first.pop();

        second.push(temp);
    }

    //Merge both the queue into the orignal(first)queue

    for(int i=0;i<size/2;i++){
        int temp=second.front();
        second.pop();

        first.push(temp);

        temp=first.front();
        first.pop();

        first.push(temp);
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

    Interleave(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}