#include<iostream>
#include<string.h>

using namespace std;


void uppercase(char ch[],int n){
    int index=0;

    while(ch[index]!='\0'){
        char current = ch[index];

        //check if current character is lowercase or uppercase

        if(current>= 'a' && current<= 'z'){
            //lowercase
            ch[index]=current - 'a' + 'A';
        } 
        index++;
    }
}


void lowercase(char ch[],int n){
    int index=0;

    while(ch[index]!='\0'){
        char curr=ch[index];

        if(curr>= 'A'&& curr<= 'Z'){
            ch[index]=curr-'A'+'a';
        }
        index++;
    }
}

int main(){
    char ch[100];

    cin.getline(ch,100);

    int n=strlen(ch);

    uppercase(ch,n);
    cout<<ch<<endl;

    lowercase(ch,n);
    cout<<ch;
}