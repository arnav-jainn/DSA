//Remove All Adjacent Duplicates In String
//LC-1047

class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
            string temp="";

    for(int i=0;i<n;i++){
        if(temp.length()>0 && temp.back()==s[i]){
            temp.pop_back();
        }else{
            temp.push_back(s[i]);
        }
    }
    return temp;
    }
};