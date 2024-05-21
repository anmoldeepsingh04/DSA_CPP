#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// https://leetcode.com/problems/missing-number/description/
// Solution 1:

int missingNumber(vector<int>& nums) {
        // solution 1
        int elements = nums.size();
        int realSum = elements*(elements+1)/2;
        int actualSum = accumulate(nums.begin(), nums.end(), 0);
        int ans = realSum - actualSum;
        return ans;
    }


int main(){

}