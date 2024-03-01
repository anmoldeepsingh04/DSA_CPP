#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

// find max of 3 numbers
int maxNum(int a, int b, int c){
  int maxVal;
  if(a > b){
    if(a > c) maxVal = a;
    else maxVal = c;
  }
  else {
    if(b > c) maxVal = b;
    else maxVal = c;
  }
  return maxVal;
}


// count from 1 to n
void count(int n){
  for(int i = 1; i <= n; i++){
    cout<<i<<endl;
  }
}


// check if a number is prime or not
bool primeCheck(int n){
  bool isPrime = true;
  if(n==2){
    return isPrime;
  }
  for(int i = 2; i < n; i++){
    if(n%i == 0){
      isPrime = false;
      break;}
  }
  return isPrime;
}


// check if a number is even or odd
string parityCheck(int a){
  string parity;
  if(a%2 == 0) parity = "Even";
  else parity = "Odd";
  return parity;
}


// sum of all numbers from 1 to n
int summation(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}


// sum of all even numbers from 1 to n
int evenSummation(int n){
  int sum = 0;
  if(n==1){return sum;}
  for(int i = 2; i <= n; i = i+2){
    sum += i;
  }
  return sum;
}


// find area of a circle
float areaCircle(float r){
  float area = M_PI*r*r;
  return area;
}


// find factorial of n
int factorial(int n){
  int fac = 1;
  for(int i = 1; i <= n; i++){
    fac *= i;
  }
  return fac;
}


// print prime from 1 to n
void printPrime(int n){
  for(int i = 2; i <= n; i++){
    if(primeCheck(i)) cout<<i<<endl;
  }
}

// print all digits of an integer
void digitPrinter(int n){
  int count = 0;
  while(n > 0){
    int digit = n%10;
    cout<<digit<<endl;
    n /= 10;
  }
}


// create a number using digits
int numBirthArray(int n, int* arr){
  int num = 0;
  int counter = 0;
  for(int i = n-1; i >= 0; i--){
    num += arr[i] * pow(10.0,double(counter));
    counter++;
  }
  return num;
}

int numBirth(int n, int k){
  int num = n*pow(10,k);
  return num;
}

// convert km to miles
float distConvertor(float km){
  float miles = km*0.621371;
  return miles;
}

// convert fahrenhite to celcius
float tempConvertor(float f){
  float c = ((f-32)*5)/9;
  return c;
}

// count the set bits in a number
// converting the number to its binary representation
int binaryConvert(int num){
  int binary = 0;
  int i = 0;
  while(num > 0){
    int bit = num%2;
    binary += bit*pow(10,i++);
    num /= 2;
  }
  return binary;
}

int setCountNormal(int num){
  int val = 0;
  // convert the number to its binary representation
  int binary = binaryConvert(num);
  while(binary>0){
    int bit = binary%10;
    if((bit & 1)==1) ++val;
    binary /= 10;
  }
  return val;
}

int setCountBitwise(int num){
  int val = 0;
  while(num>0){
    if(num & 1){
      ++val;
    }
    num = num >> 1;
  }
  return val;
}


// check if a number is even or odd using bitwise operator
string parityBitwise(int num){
  string ans;
  int binary = binaryConvert(num);
  int finalBit = binary%10;
  if(finalBit == 1) ans = "odd";
  else ans = "even";
  return ans;
}

// print binary representation of a binary number with decimals upto k precision
double decimalBinaryConvert(double num, int k){
  double decimalBinary;
  double integerPart = floor(num);
  double fracPart = num - integerPart;
  cout<<integerPart<<" "<<fracPart<<endl;
  double val1 = binaryConvert(integerPart);
  cout<<val1<<endl;
  double val2 = 0;
  for(int i = 0; i < k; i++){
    double val = fracPart*2;
    cout<<val<<endl;
    if(val >= 1){
      val2 += 1/pow(10,i);
      cout<<""<<endl;
    }
    fracPart = val - floor(val);
    cout<<fracPart<<endl;
    cout<<endl;
    
  }
  cout<<"0000 "<<val1<<" "<<val2<<endl;
  decimalBinary = double(val1 + val2/pow(10,1));
  
  return decimalBinary;
}


int main() {
  // cout<<maxNum(3, 2, 1);
  // count(10);
  // cout<<primeCheck(35);
  // cout<<parityCheck(8);
  // cout<<summation(3);
  // cout<<evenSummation(0);
  // cout<<areaCircle(3);
  // cout<<factorial(16);
  // printPrime(11);
  // digitPrinter(6468453);
  
  // using array
  // int arr[5] = {3,4,2,9,1};
  // cout<<numBirthArray(5, arr);
  
  // without using array
  // int n;
  // int i = 0;
  // int val = 0;
  // while(true){
  //   cin>>n;
  //   if(n>0){
  //     val += numBirth(n, i);
  //     i++;
      
  //   }
  //     else break;
  // }
  // cout<<val<<endl;
  
  // cout<<distConvertor(1.0);
  // cout<<tempConvertor(33.8);
  
  // int num = 1023;
  // cout<<binaryConvert(num)<<endl;
  // cout<<setCountNormal(num)<<endl;
  // cout<<setCountBitwise(num)<<endl;
  
  // cout<<"Binary conversion of "<<num<<" is: "<<binaryConvert(num)<<endl;
  // cout<<num<<" is: "<<parityBitwise(num)<<endl;

  double num = 2.47;
  int k = 5;
  cout<<fixed<<setprecision(k)<<decimalBinaryConvert(num, k)<<endl;
  return 0;
}