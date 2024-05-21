#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/two-sum/description/
// Solution 1: 

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    bool flag = false;
    for(int i = 0; i < nums.size() - 1; i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i]+nums[j] == target){
                flag = true;
                ans.push_back(i);
                ans.push_back(j);
            }
        }
        if(flag) break;
    }
    return ans;
}

int main(){

}

