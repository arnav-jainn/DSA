#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> nextSmallerElement(int arr[],int size,vector<int>&ans){

    stack<int>st;

    st.push(-1);

    for(int i=0;i<size;i++){
        int curr=arr[i];
        //answer find kro

        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();

        st.push(curr);
    }
    return ans;
}

int main(){
    int arr[]={8,4,6,2,3};
    int size=5;
    vector<int>ans(size);

    ans=nextSmallerElement(arr,size,ans);

    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }

}