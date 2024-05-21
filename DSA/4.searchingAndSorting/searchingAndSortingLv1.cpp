#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;

    while(start <= end){
        //found
        if(arr[mid] == target){
            // return index of the found element
            return mid;
        }
        else if(target > arr[mid]){
            // go to right
            start = mid + 1;
        }
        else if(target < arr[mid]){
            // go to right
            end = mid - 1;
        }

        // mid update
        mid = (start + end)/2;
    }

    // if no element is found then that means that the element does not exist in the array, return an invalid index
    return -1;
}

int main(){
    
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 90;
    int n = 9;

    int ansIndex = binarySearch(arr, n, target);

    if(ansIndex == -1) cout<<"Element not found. "<<endl;
    else cout<<"Element found at index: "<<ansIndex<<endl;

    return 0;
}