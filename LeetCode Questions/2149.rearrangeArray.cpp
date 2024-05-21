#include <iostream>
#include <vector>

using namespace std;

//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// Solution 1:

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) negative.push_back(nums[i]);
            else positive.push_back(nums[i]);
        } 
        vector<int> ans;
        for(int i = 0; i < nums.size()/2; i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }
        nums = ans;
        return nums;
    }


int main(){

}