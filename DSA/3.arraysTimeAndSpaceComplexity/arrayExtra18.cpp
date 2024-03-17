#include <iostream>

using namespace std;

void modifyArr(int arr[], int size){
    int flag1 = 0, flag2 = size-1;
    while(flag2 > flag1){
        while(arr[flag1] < 0){
            flag1++;
        }
        while(arr[flag2] > 0){
            flag2--;
        }
        swap(arr[flag1], arr[flag2]);
        flag1++;
        flag2--;

    }
    return;
}

void modifyArr2(int arr[], int size){
    int index = 0, j = 0;
    for(index = 0; index < size; index++){
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main(){
    //question1: Given an array having negative and positive elements, modify the array in such a way that all the -ve elements are on the left
    // and all the right elements are on the right. Assuming 0 to be a positive integer.
    const int size = 9;
    int arr[size] = {23, -7, 12, -10, 0, -11, 40, 60, -45};
    modifyArr(arr, size); // my solution
    // modifyArr2(arr, size); // better solution
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //question2: https://leetcode.com/problems/sort-colors/
    //completed one question
    return 0;
}