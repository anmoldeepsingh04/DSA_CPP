// https://leetcode.com/problems/running-sum-of-1d-array/
// Solution 1:
vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSums;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            runningSums.push_back(sum);
        }
    return runningSums;
    }