#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/number-of-employees-who-met-the-target/
// Solution 1:

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans = 0;
        for(int i = 0; i < hours.size(); i++){
            if(hours[i] >= target){ans++;}
        }
        return ans;
    }

int main(){

}