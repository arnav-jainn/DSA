//LC-20
//very imp

#include<iostream>
#include <stack>

using namespace std;

bool valid(stack<char>st,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];

        if(ch=='('||ch=='['||ch=='{'){
            //for opening bracket push

            st.push(ch);
        }else{
            if(!st.empty()){
                //closing bracket

                if(ch==')'||st.top()=='('){
                    st.pop();
                }
                else if(ch=='}'||st.top()=='{'){
                    st.pop();
                }
                else if(ch==']'||st.top()=='['){
                    st.pop();
                }else
                    return false;
            }else{
                return false;
            }
        }
     }
    if(st.size()==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    string str="({[)]})";
    stack<char>st;

    bool ans=valid(st,str);

    if(ans==true){
        cout<<"valid";
    }else{
        cout<<"not";
    }
}