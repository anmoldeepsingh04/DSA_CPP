#include <iostream>
#include <vector>

using namespace std;
 
//https://leetcode.com/problems/row-with-maximum-ones/description/
// Solution 1:

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowIndex = 0, oneCount = 0;
        for(int i = 0; i < mat.size(); i++){
            int sum = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1) sum ++;
            }
            if(sum > oneCount){
                oneCount = sum;
                rowIndex = i;
            }
        }
        vector<int> ans = {rowIndex, oneCount};
        return ans;
    }


int main(){

}