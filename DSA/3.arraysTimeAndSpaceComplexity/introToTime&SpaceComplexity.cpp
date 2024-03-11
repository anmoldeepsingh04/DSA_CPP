#include <iostream>

using namespace std;

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