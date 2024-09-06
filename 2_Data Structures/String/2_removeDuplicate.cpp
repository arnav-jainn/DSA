//Remove All Adjacent Duplicates In String
//LC-1047

class Solution {
public:
    string removeDuplicates(string s) {
        string temp="";
        int index=0;

        while(index<s.length()){
            if(temp.length()>0 && temp.back()==s[index]){
                temp.pop_back();
            }else{
                temp.push_back(s[index]);
            }
            index++;
        }

        return temp;
    }
};