#include<iostream>
#include<string.h>

using namespace std;

bool palindrome(char ch[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(ch[left]==ch[right]){
            left++;
            right--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int n=strlen(ch);

    int p=palindrome(ch,n);
    if(p==1){
        cout<<"valid";
    }else{
        cout<<"Not Valid";
    }
}