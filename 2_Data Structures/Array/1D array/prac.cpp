#include<iostream>

using namespace std;


    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        int size=nums.size();
        vector<int>v;

        for(int i=0;i<size;i++){
            ans=ans^nums[i];
            // v.push_back(ans);
        }
        return ans;
        // int sum=0;
        // for(int i=0;i<v.size();i++){
        //     sum=+v[i];
        // }
        // return sum;
        
    }

int main(){

    vector<int>nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    cout<<sumOfUnique(nums);
}