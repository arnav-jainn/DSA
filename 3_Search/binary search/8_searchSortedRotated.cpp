#include<iostream>

using namespace std;


int pivoot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s/2+e/2;

    while(s<=e){

        if(s==e){
            return s;
        }
        if(mid+1<n && arr[mid]>arr[mid+1]){
            return mid;
        }else if(mid-1>=0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }else if(arr[s>arr[mid]]){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s/2+e/2;
    }

    return -1;
}

int bs(int arr[],int n,int target,int s,int e,){
    int mid=s/2+e/2;

    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }else if(target>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s/2+e/2;
    }   
    return -1; 
}

int main(){
    int arr[]={12,14,16,2,4,6,8,10};
    int n=8;
    int target=7;

    int p=pivoot(arr,n);
    // cout<<p;
    int ans=-1;

    // line A
    if(target>=arr[0] && target<=arr[p]){
        ans= bs(arr,n,target,0,p);
    }
    // else if(target>=arr[p+1] && target<=arr[n])
    else{
        ans= bs(arr,n,target,p+1;n-1);
    }
    return ans;
    

}