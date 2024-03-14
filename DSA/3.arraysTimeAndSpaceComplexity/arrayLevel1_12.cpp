#include <iostream>
#include <limits.h>

using namespace std;

// int sum(int arr[], int size){
//   int summs = 0;
//   for(int i = 0; i < size; i++){
//     summs += arr[i];
//   }
//   return summs;
// }

// bool linearSearchFuncExample(int arr[], int size, int target){
//   bool flag = 0;
//   for(int i = 0; i < size; i++){
//     if(arr[i]==target) {return 1;}
//   }
//   return 0;
// }

// int count0And1(int arr[], int size){
//   int sum0 = 0;
//   for(int i = 0; i < size; i++){
//     if(arr[i] == 0) sum0 += 1;
//   }
//   return sum0;
// }

// int count0And1Bitwise(int arr[], int size){
//   int sum1 = 0;
//   for(int i = 0; i < size; i++){
//     if(arr[i] & 1) sum1 += 1;
//   }
//   return sum1;
// }

// int minVal(int arr[], int size){
//   int min = INT_MAX;
//   for(int i = 0; i < size; i++){
//     if(arr[i] <= min) min = arr[i];
//   }
//   return min;
// }

// int* arrayReverse(int arr[], int size){
//   int temp = 0;
//     for(int i = 0; i < size/2; i++){
//       temp = arr[i];
//       arr[i] = arr[size-i-1];
//       arr[size-i-1] = temp;
//     }
//   return arr;
// }

// void arrayRevSwap(int arr[], int size){
//   int left = 0; 
//   int right = size - 1;
//   while(left<right){
//     swap(arr[left], arr[right]);
//     left++;
//     right--;
//   }
// }

// void extremePrint(int arr[], int size){
//   int left = 0; 
//   int right = size-1;
//   while(left<=right){
//     if(left<right) cout<<arr[left]<<" "<<arr[right]<<" ";
//     else cout<<arr[left];
//     left++;
//     right--;
//   }
// }


int main(){
  // creating an array
  // static array creation (static means that we have fixed the length of the array)
  // int integer[100];
  // char character[100];
  // bool boolean[100];
  // long longNum[100];
  // cout<<"Array creation successful!"<<endl;
  
  // // address and size of an array
  // int arr[4]; // the name of the array is itself a memory address
  // cout<<"Address of arr: "<<arr<<endl;
  // // using the address of (&) operator
  // int a = 4;
  // cout<<"Address of a is: "<<&a<<endl;
  // cout<<"The size of a is: "<<sizeof(a)<<endl;
  // // shows that array is a contiguous memory storage, successive locations will vary by 4 bytes only
  // cout<<"Address of arr: "<<&arr[0]<<endl;
  // cout<<"Address of arr: "<<&arr[1]<<endl;
  // cout<<"Address of arr: "<<&arr[2]<<endl;
  // cout<<"Address of arr: "<<&arr[3]<<endl;
  // cout<<"The size of arr is: "<<sizeof(arr)<<endl;
  
  // // array initialisation
  // int arr1[] = {1,2,3,4,5};
  // int arr2[5] = {1,2,3,4,5};
//   int arr3[5] = {1,2,3};
  // int arr4[5] = {1,2,3,4,5,6};  // throws an error
  
  // we can not have static arrays with undefined size, it is a bad practice
  // int n;
  // cin>>n;
  // int arr[n];
  // for(int i = 0; i<n; i++){
  //   cout<<arr[i]<<endl;
  // }
  
  // cpp uses 0 based indexing
  // int n = 5;
  // int arr[n] = {9,8,7,6,5};
  // for(int  i =0; i < n; i++){
  //   cout<<arr[i]<<" ";
  // }
  
  // taking input in an array
  // int n = 3;
  // int arr[n];
  // for(int  i =0; i < n; i++){
  //   cin>>arr[i];
  // }
  // for(int  i =0; i < n; i++){
  //   cout<<arr[i]<<" ";
  // }
  
  // int arr[i] = Value at (baseAddress + index*dataTypeStorage)
  // int arr[3] = {1,2,3};
  // int index = 1;
  // cout<<"Accessing elements using index: "<<arr[index]<<endl;
  // int* indexer = arr + index;
  // cout<<"Accessing elements using formula: "<<*indexer<<endl;
  
  // question1:
  // 1. create an array of size 5
  // 2. take input in that array
  // 3. double each value
  // 4. print the array
  // int n = 5;
  // int arr[n];
  // for(int i = 0; i < n; i++){
  //   cout<<"Enter value at index "<<i<<endl;
  //   cin>>arr[i];
  // }
  // for(int i = 0; i  < n; i++){
  //   arr[i] *= 2;
  // }
  // for(int i = 0; i  < n; i++){
  //   cout<<"Value at index "<<i<<": "<<arr[i]<<endl;
  // }
  
  // question2:
  // 1. create an array of size 5
  // 2. take input in that array
  // 3. print the sum of elements in array
  // int n = 5;
  // int arr[n];
  // for(int i = 0; i < n; i++){
  //   cout<<"Enter value at index "<<i<<endl;
  //   cin>>arr[i];
  // }
  // int sum = 0;
  // for(int i = 0; i  < n; i++){
  //   sum += arr[i];
  // }
  // cout<<"Sum of the elements is: "<<sum<<endl;
  
  // linear search in an array
  // int n = 6;
  // int target = 10;
  // int arr[n];
  // for(int i = 0; i < n; i++){
  //   cout<<"Enter value at index "<<i<<endl;
  //   cin>>arr[i];
  //   cout<<arr[i]<<endl;
  // }
  // bool flag = 0;  // tells whether the target was found after traversing the array or not
  // for(int i = 0; i  < n; i++){
  //   if(arr[i] == target){
  //     flag = 1;
  //     break;
  //   }
  // }
  // if(flag) cout<<"Target value found!"<<endl;
  // else cout<<"Target value not found!"<<endl;
  

  // arrays and functions: passing arrays as function arguments
  // when we have to pass an array as an argument in a function, we need
  // pass the size of the array as well in the function which is the number
  // of elements present inside the array, and not the size of the array
  // int size = 10;
  // int target = 41;
  // int arr[size] = {1,2,3,4,5, 6, 7, 8, 9, 10};
  // // cout<<"The sum of array elements is: "<<sum(arr, size)<<endl;
  // cout<<"Target found: "<<linearSearchFuncExample(arr, size, target);
  
  // question3: Count 0's and 1's in an array
  // int size = 5;
  // int arr[size] = {0,1,1,0,1};
  // int sum0 = count0And1(arr, size);
  // int sum1 = count0And1Bitwise(arr, size);
  // cout<<"Number of 1s in array: "<<sum1<<endl;
  // cout<<"Number of 0s in array: "<<size - sum1<<endl;
  
  // question4: find the minimum number in an array
  // if we want to use the minimum and maximum values of any datatype we can use
  // limit.h header file
  // when finding the minimun number, always initialize the comparator with
  // INT_MAX because an int cannot go beyond INT_MAX, and vice versa when 
  // finding the maximum number.This is a good practice.
  // int size = 10;
  // int arr[size] = {70, 93, 53, 833, 2049, 40618, 2422, 184, 935, 4560};
  // cout<<"The minimum value in the array is: "<<minVal(arr, size)<<endl;
  
  //question5: Reverse an array
  // int size = 9;
  // int arr[size] = {1,2,3,4,5,6,7,8,9,10};
  // // int* arrNew = arrayReverse(arr, size);
  // arrayRevSwap(arr, size);
  // for(int i = 0; i < size; i++){
  //   cout<<arr[i]<<" ";
  // }
  
  // question6: Extreme print an array
//   int size = 9;
//   int arr[size] = {1,2,3,4,5,6,7,8,9,10};
//   extremePrint(arr, size);
  
  
  
  
  
  
  
  
  
  
  return 0;
}