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

int binarySearchFirstOccurence1(int arr[], int n, int target){
    int start = 0, end = n-1, mid = (start+end)/2;
    int prelimAns = 0;
    bool flag = 0;
    while(start <= end){
        if(arr[mid] == target) {
            prelimAns = mid;
            flag = 1;
            break;
            }
        else if(target > arr[mid]) start = mid + 1;
        else if(target < arr[mid]) end = mid - 1;
        mid = (start+end)/2;
    }

    if(flag){
        int finalAns = 0;
        for(int i = prelimAns; i >= 0 ; i--){
            if(arr[i] != arr[prelimAns]){
                finalAns = i+1;
                break;
            }
        }
        return finalAns;
    }
    else{
        return -1;
    }

}

int binarySearchFirstOccurence2(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if(target < arr[mid]){
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int binarySearchLastOccurence(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if(target < arr[mid]){
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int binarySearchTotalOccurence(int arr[], int n, int target){
    int start = binarySearchFirstOccurence2(arr, n, target);
    int end = binarySearchLastOccurence(arr, n, target);
    if(start == -1 or end == -1){
        return -1;
    }
    else{
        return end - start + 1;
    }
}

int binarySearchMissingElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        int diff = arr[mid] - mid;
        if(diff == 1){
            // go to right
            s = mid+1;
        }
        else{
            // ans store
            ans = mid;
            // go to left
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    // HW: find what should be changed so that the following extra condition can be removed
    if(ans + 1 == 0){
        return n+1;
    }
    return ans+1;
}

int main(){
    
    // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int target = 90;
    // int n = 9;

    // int ansIndex = binarySearch(arr, n, target);

    // if(ansIndex == -1) cout<<"Element not found. "<<endl;
    // else cout<<"Element found at index: "<<ansIndex<<endl;

    // // question1: find the first occurence of a number in a sorted array
    // int arr[]= {10, 20, 30, 30, 30, 30, 30, 30};
    // int target = 30;
    // int n = 8;
    // // int ansIndex = binarySearchFirstOccurence1(arr, n, target);
    // int ansIndex = binarySearchFirstOccurence2(arr, n, target);
    // if(ansIndex == -1) cout<<"Element not found. "<<endl;
    // else cout<<"Element found at index: "<<ansIndex<<endl;

    // question2: find the last occurence of a number in a sorted array
    // int arr[]= {10, 20, 30, 30, 30, 30, 40, 50};
    // int target = 30;
    // int n = 8;
    // int ansIndex = binarySearchLastOccurence(arr, n, target);
    // if(ansIndex == -1) cout<<"Element not found. "<<endl;
    // else cout<<"Element found at index: "<<ansIndex<<endl;

    // // question3: find the total occurences of a number in a sorted array
    // int arr[]= {10, 10, 10, 20, 20, 20, 20, 30};
    // int target = 30;
    // int n = 8;
    // int ansIndex = binarySearchTotalOccurence(arr, n, target);
    // if(ansIndex == -1) cout<<"Element not found. "<<endl;
    // else cout<<"Element occured for: "<<ansIndex<<" times."<<endl;

// question4: find a missing element in a sorted array
    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int ans = binarySearchMissingElement(arr, n);
    cout<<"The missing element is: "<<ans<<endl;
    return 0;
}