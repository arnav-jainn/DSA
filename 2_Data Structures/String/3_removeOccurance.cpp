//Remove All Occurrences of a Substring
//LC-1910

class Solution {
public:
    string removeOccurrences(string s, string part) {

        while(s.find(part)!=string::npos){
            //part is inside the string
             s.erase(s.find(part),part.length());
        } 
        return s;
    }
};