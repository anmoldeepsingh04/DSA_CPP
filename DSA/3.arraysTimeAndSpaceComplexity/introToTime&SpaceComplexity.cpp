#include <iostream>

using namespace std;
// Time complexity is used to estimate the runtime of an algorithm as the number of inputs increase
// The time that we talk about in time complexity is not the usual time rather the number of operations 
// that are performed in an algorithm
int main(){
    // what is the time complexity of the code below?
    int a = 0, b = 0, n;
    cin>>n;
    for(int i =0; i < n; i++){
        for(int j = n; j > i; j--){
            cout<<"Hello!"<<endl;
        }
    }

    return 0;
}

// Ans: O(n*n) as the worst case for outer loop is n and for the inner loop, for i = 0, j run for n times. 