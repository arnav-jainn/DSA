//using modulus approach
//LC-189(Rotate array)

#include<iostream>
using namespace std;

void rotate (vector<int>& nums, int k) {
    int n = nums.size() ;
    vector<int> ans (n) ;
    for(int index=0; index<n; index++) {
        int newIndex = (index + k) % n;
        ans [newIndex] = nums [index];
    }
    nums = ans;
};

int main(){
    vector<int>num;

    int k=num.size();

    rotate(num,k);

    for(int i=0;i<num.size();i++){
        cout<<num[i];
    }
}