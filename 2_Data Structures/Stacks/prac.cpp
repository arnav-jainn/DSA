#include<stack>

class MinStack {
public:
    vector<pair<int,int> >st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            pair<int,int>p;
            p.first=val;
            p.second=val;
            st.push_back(p);
        }else{
            pair<int,int>p;
            p.first=value;
            int purana=st.back().second;
            p.second=min(purana,val);
            st.push_back(p);
        }
    }
    
    void pop() {
         st.pop_back();
    }
    
    int top() {
        pair<int,int> rightmost=st.back();
        return rightmost.first;
    }
    
    int getMin() {
        pair<int,int>nrightmost=st.back();
        retrun rightmost.second;
    }
};
