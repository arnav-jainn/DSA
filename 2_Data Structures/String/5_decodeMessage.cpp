//LC-2325

class Solution {
public:
    string decodeMessage(string key, string message) {

        //create mapping
        char start = 'a';
        char arr[280]={0};              // every value have zero

        for(auto ch: key){
            if(ch!=' ' && arr [ch]==0){
                arr[ch]=start;
                start++;
            }
        }


        //use mapping
        string ans;

        for(auto ch: message){
            if(ch==' '){
                ans.push_back(' ');
            }else{
            char decodedChar = mapping[ch];
            ans.push_back(decodedChar);
            }

        }
        return ans;
    }
};