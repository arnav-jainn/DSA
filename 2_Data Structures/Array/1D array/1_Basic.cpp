#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


//STATIC ARRAY
    int arr[n];
// Taking input in an array
    for(int i=0;i<n;i++){
        cout<<"Enter number: "<<i<<endl;
        cin>>arr[i];
    }
    cout<<endl;
//Giving output in an array
    cout<<"All the numbers are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }



//DYNAMIC ARRAY(USER IP BASED ARRAY SIZE)
    int * arrr=new int[n];
// Taking input in an array
    for(int i=0;i<n;i++){
        cin>>arrr[i];
    }
//Giving output in an array
    for(int i=0;i<n;i++){
        cout<<arrr[i];
    }

}

