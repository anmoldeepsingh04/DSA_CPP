#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// two dimensional arrays

void printArrayRows(int arr[][3], int rows, int cols){
  //doesn't work is arr[][] is passed, need to pass arr[][col_num]
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

void printArrayCols(int arr[][3], int rows, int cols){
  //doesn't work is arr[][] is passed, need to pass arr[][col_num]
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
}

bool findTarget(int arr[][3], int rows, int cols, int target){
  // bool flag = false;
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      if(arr[i][j] == target){
        // flag = true;
        // break;
        return true;
      }
      // if(flag){break;}
    }
    // cout<<endl;
  }
  return false;
}

int findMax(int arr[][3], int rows, int cols){
  int max = INT_MIN;
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      if(arr[i][j] > max){
        max = arr[i][j];
      }
    }
  }
  return max;
}

int findMin(int arr[][3], int rows, int cols){
  int min = INT_MAX;
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      if(arr[i][j] < min){
        min = arr[i][j];
      }
    }
  }
  return min;
}

void rowSum(int arr[][4], int rows, int cols){
  for(int i = 0; i < rows; i++){
    int rowSum = 0;
    for(int j = 0; j < cols; j++){
      rowSum += arr[i][j];
    }
    cout<<rowSum<<" ";
  }
  return;
}

void colSum(int arr[][4], int rows, int cols){
  for(int i = 0; i < cols; i++){
    int colSum = 0;
    for(int j = 0; j < rows; j++){
      colSum += arr[j][i];
    }
    cout<<colSum<<" ";
  }
  return;
}

void diaSum(int arr[][4], int rows, int cols){
  int diaSum = 0;
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      if(i == j){diaSum += arr[j][i];}
    }
  }
  cout<<diaSum;
  return;
}

void diaSumSingleLoop(int arr[][4], int rows, int cols){
  int diaSum = 0;
  for(int i = 0; i < rows; i++){
      diaSum += arr[i][i];
  }
  cout<<diaSum;
  return;
}

void printOtherDia(int arr[][3], int rows, int cols){
  for(int i = 0; i < rows; i++){
    cout<<arr[i][rows-i-1]<<" ";
  }
  return;
}

void transpose(int arr[][3], int rows, int cols){
  for(int i = 0; i < rows; i++){
    for(int j = i+1; j < cols; j++){
      if(i < j) swap(arr[i][j], arr[j][i]);
    }
  }
  return;
}

void transposeWOSwap(int arr[][3], int rows, int cols){
  int temp = 0;
  for(int i = 0; i < rows; i++){
    for(int j = i+1; j < cols; j++){
        temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    }
  }
  return;
}

int main() {
    
  // 2-d array initialisation
  // int arr[5][10];
  // for(int i = 0; i < 5; i++){
  //   for(int j = 0; j < 10; j++){
  //     arr[i][j] = i*10+j;
  //   }
  // }
  // for(int i = 0; i < 5; i++){
  //   for(int j = 0; j < 10; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  
  // int arr[2][3] = {{1,2,3},{4,5,6}};
  // for(int i = 0; i < 2; i++){
  //   for(int j = 0; j < 3; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  
// a  2-d  array is visualised as a 2x2 matrix but in memory, it is stored as a linear array where the corresponding 
// elements are mapped using the formula: c*i+j, where c is the number of columns in the array, i is the row index and
// j is the column index. 

// different ways to initialize array
  // int arr1[2][3] = {{1,2,3},{4,5,6}};  // works fine
  // int arr2[][] = {{1,2,3},{4,5,6}};  // throws error
  // int arr3[][3] = {{1,2,3},{4,5,6}};  // works fine
  // int arr4[2][] = {{1,2,3},{4,5,6}};  // throws error
// ***so, we need to atleast provide the column number for initialisation becasue the mapping from matrix form to 
// ***linear form in memory is done using column counts, that's why defining column number is important.
// *** similar is the case when we pass a 2-d array to a function as arguments. We atleast need to provide the number of columns in the array.

// accessing array elements
  // int rows = 2;
  // int cols = 3;
  // throws error if we put rows and columns as the number of rows and columns in arr1 becase
  // C++ does not support the declaration of arrays with non-constant sizes in the way you've 
  // attempted. In C++, the size of an array must be known at compile time, which means it must be a constant expression.
  // either make rows and cols "constant" for the entire program so that they aren't changed later
  // int arr1[2][3] = {{1,2,3},{4,5,6}};
  // printArrayRows(arr1, rows, cols); // accessing row-wise
  // cout<<endl;
  // printArrayCols(arr1, rows, cols); // accessing column-wise
  
  // input in a 2-d array
  // int arr1[3][3];
  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     cin>>arr1[i][j];
  //   }
  // }
  // printArrayRows(arr1, 3, 3);
  // cout<<endl;
  // printArrayCols(arr1, 3, 3);
  
  //question1: provided an initialised 2-d array, find if the target value is present or not
  // int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  // int target = 1;
  // cout<<findTarget(arr, 3, 3, target)<<endl;
  
  //question2: provided an initialised 2-d array, find larget value present
  // int arr[3][3] = {{1,21,3}, {4,5,6}, {7,8,9}};
  // cout<<findMax(arr, 3, 3)<<endl;
  
  //question3: provided an initialised 2-d array, find smallest value present
  // int arr[3][3] = {{11,21,93}, {14,785,69}, {537,82,19}};
  // cout<<findMin(arr, 3, 3)<<endl;
  
  //question4: provided an initialised 2-d array, find row-wise, col-wise, dia-wise sum
  // const int rows = 3;
  // const int cols = 4;
  // int arr[rows][cols] = {{10,20,5,7}, {2,4,6,8}, {10,15,15,10}};
  // rowSum(arr, rows, cols);
  // cout<<endl;
  // colSum(arr, rows, cols);
  // cout<<endl;
  // diaSum(arr, rows, cols);
  // cout<<endl;
  // diaSumSingleLoop(arr, rows, cols);
  
  // question5: print the other diagonal of a square matrix
  // const int rows = 3;
  // const int cols = 3;
  // int arr[rows][cols] = {{10,20,5}, {2,4,6}, {10,15,15}};
  // printOtherDia(arr, rows, cols);
  
  // question6: print the transpose of a square matrix
  // const int rows = 3;
  // const int cols = 3;
  // int arr[rows][cols] = {{10,20,5}, {2,4,6}, {10,15,15}};
  // printArrayRows(arr, rows, cols);
  // transpose(arr, rows, cols);
  // cout<<endl;
  // printArrayRows(arr, rows, cols);
  // transposeWOSwap(arr, rows, cols);
  // cout<<endl;
  // printArrayRows(arr, rows, cols);
  
// 2-d vectors
  // vector<int> v;
  // cout<<v.size()<<endl; // returns 0
  // cout<<v.capacity()<<endl; // returns 0
  // the capacity and size both are zero as no elements are present in the vector and thus, the capacity
  // is also zero as no elements need to be stored.
  // vector<int> ar(5, 0 // vector of size 5 initialized with 0
  // for(int i = 0; i < ar.size(); i++){
  //   cout<<ar[i]<<" ";
  // }

// declaring a 2-d vector
  // // vector <vector<int>> arr; // creating a vector of vectors without initialisation
  // vector<vector<int>> arr(5, vector<int>(10,1));
  // // creating a vector of size 5 vectors of size 10 initialised with 1
  // for(int i = 0; i < arr.size(); i++){
  // // # rows is the size of 2-d vector
  //   for(int j = 0; j < arr[i].size(); j++){
  //   // # columns is size of each vector 
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  
  // creating a jagged array
  vector<vector<int>> arr(5);
  vector<int> arr1(2,5);
  vector<int> arr2(5,9);
  vector<int> arr3(3,3);
  vector<int> arr4(7,6);
  vector<int> arr5(10,8);
  arr.push_back(arr1);
  arr.push_back(arr2);
  arr.push_back(arr3);
  arr.push_back(arr4);
  arr.push_back(arr5);
  for(int i = 0; i < arr.size(); i++){
    for(int j = 0; j < arr[i].size(); j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}