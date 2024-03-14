#include <iostream>

using namespace std;

int incrementByValue(int n){
    cout<<"Address of function n "<<&n<<endl;
    n += 1;
    return n;
    // we can see that both the address are different, that means that a new memory location is created and the value of the argument
    // passed is stored and then calculations take place there. After that the value obtained there is copied back to the main n
}

void incrementByReference(int& n){
    cout<<"Address of function n "<<&n<<endl;
    n += 1;
    return;
    // no need to return anything as the calculations take place at the same memory address return n;
    // we can see that both the address are same, thus, both the variables point to the same memory location
}


int main(){
    //creating reference variables
    // int n = 10; // integer variable
    // int& k = n;  // reference variable of n
    // int&c = k;  // reference variable of k
    // cout<<n<<" "<<k<<" "<<c<<endl;;
    // c = 7;  // change in c, reflects in k that reflects in n
    // cout<<n<<" "<<k<<" "<<c;

    int k = 7;
    cout<<"Address of main n "<<&k<<endl;
    
    // printing using call by value
    // k = incrementByValue(k);

    // printing using call by reference
    incrementByReference(k);
    
    cout<<k<<" by value"<<endl;
    return 0;
}