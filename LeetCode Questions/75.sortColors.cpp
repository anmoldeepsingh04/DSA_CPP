#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/sort-colors/description/
// Solution 1:
    void sortColors(vector<int>& nums) {
        // using counting
        int size = nums.size();
        int zeros = 0, ones = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == 0) zeros++;
            else if(nums[i] == 1) ones++;
        }
        for(int i = 0; i < size; i++){
            if(i < zeros) nums[i] = 0;
            else if(i < zeros+ones) nums[i] = 1;
            else nums[i] = 2;
        }
    }
 
// Solution 2:
    void sortColors(vector<int>& nums) {
        // using two-pointer approach
        int size = nums.size();
        int zeros = 0, ones = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == 0) zeros++;
            else if(nums[i] == 1) ones++;
        }
        for(int i = 0; i < size; i++){
            if(i < zeros) nums[i] = 0;
            else if(i < zeros+ones) nums[i] = 1;
            else nums[i] = 2;
        }
    }

int main(){
    
}