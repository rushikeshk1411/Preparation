#include <iostream>
#include<vector>
using namespace std;


 void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        
        int n = nums.size() - 1;
        for(int i=0; i<nums.size(); i++){
            ans[(i%k) + 1] = nums[i];
        }
        
    }


int main(){

vector<int>nums = {1,2,3,4,5,6};
int n = 6;
int k = 3;

rotate(nums,3);
for(int i=0; i<nums.size(); i++){
    cout<<nums[i]<<" ";
}
    return 0;
}