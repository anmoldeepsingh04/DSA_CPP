#include <iostream>
// When the execution of a program starts, the execution stack is created and all the 
// functions and variables are created following a LIFO method. As the program
// is executed and various functions return/end, the stack will unwind, meaning
// the entry of the functions/variables will be deleted from the stack and at the end
// when the entire main function ends execution, the stack is also deleted.
using namespace std;

void dutchNatFlagTwoPointer(int arr[], int size){
  int lowPoint = 0;
  int highPoint = size-1;
  while(lowPoint<highPoint){
    while(arr[lowPoint]==0 and lowPoint<highPoint){lowPoint++;}
    while(arr[highPoint]==1 and lowPoint<highPoint){highPoint--;}
    swap(arr[lowPoint], arr[highPoint]);
    lowPoint++;
    highPoint--;
  }
}

int main(){
  //question1: solve the Dutch national flag problem using two pointer appraoch
  int arr[] = {1,1,1,1,1,1,1,1,1,1};
  int size = sizeof(arr)/sizeof(int);
  // cout<<size<<endl;
  dutchNatFlagTwoPointer(arr, size);
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}