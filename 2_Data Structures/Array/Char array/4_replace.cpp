//replace @ with ( )space

#include<iostream>
#include<string.h>

using namespace std;

void replace(char ch[],int n){
    for(int i=0;i<n;i++){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int n = strlen(ch);

    replace(ch,n);
    cout<<ch;

}