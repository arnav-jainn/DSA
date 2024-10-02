#include<iostream>
#include<string.h>

using namespace std;

string all(string first,int n){
    string temp="";

    for(int i=0;i<n;i++){
        if(temp.back()==first[i]){
            temp.pop_back();
        }else{
            temp.push_back(first[i]);
        }
    }
    return temp;
}

string findd(string f,string s){
    for(int i=0;i<f.length();i++){
        if(f.find(s)!=string::npos){
            f.erase(f.find(s),s.length());
        }
    }
    return f;
}



int main(){
    string first="azxxzy";
    int n=first.length();

}