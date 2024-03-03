#include <iostream>
#include <cmath>

using namespace std;

int decimalToBinary1(int n){
    int i = 0;
    int binary = 0;
    while(n>0){
        int bit = n % 2;
        // cout<<bit<<endl;
        binary = bit*pow(10, i++) + binary;
        // cout<<binary<<endl;
        n = n / 2;
    }
    return binary;
}

int decimalToBinary2(int n){
    int i = 0;
    int binary = 0;
    while(n>0){
        int bit = (n & 1);
        // cout<<bit<<endl;
        binary = bit*pow(10, i++) + binary;
        // cout<<binary<<endl;
        n = n >> 1;
    }
    return binary;
}


int binaryToDecimal1(int n){
    int decimal = 0;
    int bit = 0;
    int i = 0;
    while(n > 0){
        bit = n % 10;
        decimal = decimal + bit*pow(2, i++);
        n = n/10;
    }
    return decimal;
}

int binaryToDecimal2(int n){
    int decimal = 0;
    int bit = 0;
    int i = 0;
    while(n > 0){
        bit = (n & 1);
        decimal = decimal + bit*pow(2, i++);
        n = n / 10;
    }
    return decimal;
}


int main(){
    int x = 1111;
    // cin>>x;
    // cout<<"Using division:"<<decimalToBinary1(x)<<endl;
    // cout<<"Using bitwise:"<<decimalToBinary2(x)<<endl;
    cout<<"Using division:"<<binaryToDecimal1(x)<<endl;
    cout<<"Using bitwise:"<<binaryToDecimal2(x)<<endl;
}