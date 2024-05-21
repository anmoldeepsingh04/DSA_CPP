#include <iostream>
#include <vector>

using namespace std;

//https://leetcode.com/problems/rotate-image/description/ 
// Solution 1:

void rotate(vector<vector<int>>& matrix) {
        // taking the transpose first
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i; j < matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // interchanging the columns
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size()/2; j++){
                swap(matrix[i][j], matrix[i][matrix[i].size()-1-j]);
            }
        }
    }

int main(){

}
