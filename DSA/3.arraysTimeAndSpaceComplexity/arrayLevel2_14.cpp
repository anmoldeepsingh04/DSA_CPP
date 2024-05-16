#include <iostream>

// Memory Address: A pointer has its own memory address and size on the stack, whereas a reference shares the same memory 
// address with the original variable and takes up no space on the stack.

// Array is by default passed by reference, so no new copy of the Array is created

using namespace std;

int doppleFinder(int arr[], int size){
  int ans = 0;
  for(int i = 0; i < size; i++){
    ans = ans^arr[i];
  }
  return ans;
}

void printPairs(int arr[], int size){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    }
  }
}

void twoSum(int arr[], int size, int target, int ans[], int ansSize){
  bool flag = false;
  for(int i = 0; i < size - 1; i++){
    for(int j = i+1; j < size; j++){
      if(arr[i]+arr[j] == target){
        flag = true;
        ans[0] = i;
        ans[1] = j;
      }
    }
    if(flag) break;
  }
  if(!flag) cout<<"No solution found."<<endl;
}

void printTriples(int arr[], int size){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      for(int k = 0; k < size; k++){
        cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
      }
    }
  }
}

void sortArr(int arr[], int size){
  int zeros = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] == 0) zeros++;
  }
  for(int j = 0; j < size; j++){
    if(j < zeros) arr[j] = 0;
    else arr[j] = 1;
  }
}

void shiftArr(int arr[], int size){
  int temp = arr[size-1];
  for(int i = size - 1; i > 0; i--){
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
}

void shiftSwap(int arr[], int size){
  for(int i = 0; i < size-1; i++){
    swap(arr[size-1], arr[i]);
  }
}

void shiftArrK(int arr[], int size, int k){
  int temp[k]; 
  for(int j = 0; j < k; j++){
    temp[j] = arr[size-j-1];
  }
  for(int i = size - 1; i-k >= 0; i--){
    arr[i] = arr[i - k];
  }
  for(int j = 0; j < k; j++){
    arr[j] = temp[k-j-1];
  }
}

void tripletSum(int arr[], int size, int target, int ansArr[]){
  bool flag = false;
  for(int i = 0; i < size-2; i++){
    for(int j = i+1; j < size-1; j++){
      for(int k = j+1; k < size; k++){
        if(arr[i]+arr[j]+arr[k] == target){
          ansArr[0] = i;
          ansArr[1] = j;
          ansArr[2] = k;
          flag = true;
        }
        if(flag) break;
      }
      if(flag) break;
    }
    if(flag) break;
  }
}

void dutchNatFlag(int arr[], int size){
  int zeros = 0;
  int ones = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] == 0) zeros++;
    else if(arr[i] == 1) ones++;
  }
  for(int j = 0; j < size; j++){
    if(j < zeros) arr[j] = 0;
    else if(j < zeros+ones) arr[j] = 1;
    else arr[j] = 2;
  }
}

void printArr(int a[], int size){
  // passed by reference by-default, so changes made in a[0] are reflected in the actual array
  a[0] += 100;
  for(int i = 0; i < size; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int main(){
//question1: you have an array and all the elements in the array appear twice
// except for one element. Find that element. 
// coudn't solve in first go, use XOR operation
// XOR: A^A = 0 and A^B = 1. 0^A = A
  // int size = 7;
  // int arr[] = {1,5,2,5,1,4,2};
  // cout<<doppleFinder(arr, size)<<endl;
  
//question2: you have an array, print all the possible pairs
  // int size = 3;
  // int arr[] = {10,20,30};
  // printPairs(arr, size);
  
// question3: Solve two sum/pair sum question
  // Given an array of integers, return indices of the two numbers 
  // such that they add up to a specific target.
  // but you can assume that there will only be one solution for 
  // each test case.
  // int size = 4;
  // int target = -1;
  // int arr[] = {1,2,5,-2};
  // int ansArr[2];
  // int ansSize = 2;
  // twoSum(arr, size, target, ansArr, ansSize);
  // cout<<ansArr[0]<<" and "<<ansArr[1]<<endl;
  
// //question4: you have an array, print all the possible triplets
//   int size = 4;
//   int arr[] = {10,20,30, 40};
//   printTriples(arr, size);
  
//question5: sort 0's and 1's present in an array
  // int size = 9;
  // int arr[] = {0,1,0,1,1,0,0,0,0};
  // sortArr(arr, size);
  // for(int i = 0; i < size; i++){
  //   cout<<arr[i]<<endl;
  // }

//questions6: shift array element by 1
  // int size = 4;
  // int arr[] = {10, 20, 30, 40};
  // shiftArrSwap(arr, size);
  // // shiftArr(arr, size);
  // for(int i = 0; i < size; i++){
  //   cout<<arr[i]<<endl;
  // }
  
//questions7: shift array element by k
  // int size = 8;
  // int k = 2;
  // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
  // shiftArrK(arr, size, k);
  // // shiftArr(arr, size);
  // for(int i = 0; i < size; i++){
  //   cout<<arr[i]<<" ";
  // }
  // cout<<endl;
  
  //questions8: solve triplet sum problem
  // Given an array arr[] of size n and an integer X. Find if there’s 
  // a triplet in the array which sums up to the given integer X
  // int size = 6;
  // int arr [] = {1,2,3,4,5,6};
  // int ansArr[3];
  // int target = 12;
  // tripletSum(arr, size, target, ansArr);
  // cout<<ansArr[0]<<" "<<ansArr[1]<<" "<<ansArr[2]<<endl;
  
  
  //questions9: solve Dutch national flag problem
  // Given an array A[] consisting of only 0s, 1s, and 2s. The task is to 
  // write a function that sorts the given array. The functions should put 
  // all 0s first, then all 1s and all 2s in last.
  // int size = 6;
  // int arr[] = {0, 1, 2, 0, 1, 2};
  // dutchNatFlag(arr, size);
  // for(int k = 0; k < size; k++){
  //   cout<<arr[k]<<" ";
  // }
  
  // array is by-default passed by reference
  int size = 5;
  int arr[] = {0,1,2,3,4};
  printArr(arr, size);
  cout<<"Changed element "<<arr[0]<<endl;
  
  return 0;
}