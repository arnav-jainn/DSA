// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
//LC-680


class Solution {
public:

    bool checkPalindrome(string s , int left, int right){
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n=s.length();
        int left=0;
        int right=n-1;

        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                // s[left]!=s[right]
                //remove 1

                bool ans1 = checkPalindrome(s,left+1,right);
                bool ans2 = checkPalindrome(s,left,right-1);

                return ans1 || ans2 ;
            }

        }
        return true;            
        
    }
}; 