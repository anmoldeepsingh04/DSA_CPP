#include <iostream>
#include <vector>
using namespace std;

// Standard Template Library provides a collection of template classes and functions that offer common data structures and algorithms to make programming more efficient and convenient.
// A vector in C++ is a dynamic array that can grow and shrink in size, making it a versatile and efficient data structure for storing and manipulating sequences of elements.

void fun(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<endl;
  }
}
// get it done!
void print(vector<int> v){
  int size = v.size();
  for(int i = 0; i < size; i++){
    cout<<v[i]<<" ";
  }
}

int main() {
// methods of array creation
  // 1. static array: Static arrays are allocated on the stack or as global variables, and their size must be known at compile time. They have a fixed size determined by their declaration.
  // int arr[5]; // array of size 5
  // 2. dynamic array old: size is not fixed butdepends on the user input
  // int n; 
  // cin>>n;
  // int arr[n]; // this is a bad method as the array size can not be changed once the array has been created, plus it runs the risk of invalid input
  // fun(arr, n);
  // In this approach, the array arr is created as a static array with a size determined at runtime. This feature is called a variable-length array (VLA). VLAs are a non-standard extension in C++ and are not supported by all compilers. They are typically supported in C99 standard, but not in C++. Some compilers might support VLAs as an extension, but it's not portable and can lead to undefined behavior in certain scenarios.
  // 3. dynamic array: Dynamic arrays are allocated on the heap using new. They allow for allocation of memory at runtime, and their size can be determined dynamically. They need to be deallocated using delete when they are no longer needed to avoid memory leaks.
  // cin>>n;
  // int* arr = new int[n];
  // In this approach, the array arr is created dynamically on the heap using the new keyword. This allows for allocating memory at runtime, and the size of the array can be determined dynamically. Dynamic memory allocation is supported in both C and C++.
    
// Differences:
// The first approach (VLAs) creates an array on the stack, while the second approach (dynamic allocation) creates an array on the heap.
// VLAs require the size of the array to be known at runtime, while dynamic arrays allow for dynamic allocation of memory.
// VLAs might not be supported by all compilers, and their usage is not recommended in C++.
// Which is Better and Why:
// The second approach (dynamic allocation) is generally preferred over VLAs for the following reasons:

// Portability: Dynamic memory allocation using new is standard in both C and C++, whereas VLAs are a non-standard extension and are not supported by all compilers.
// Flexibility: Dynamic allocation allows for allocating memory at runtime and resizing the array as needed, while VLAs require the size of the array to be known at runtime.
// Stack Size Limitations: Stack space is limited, and creating large arrays with VLAs can lead to stack overflow errors. Dynamic allocation allows for allocating larger arrays without such limitations.
// Safety: Dynamic allocation is safer as it avoids stack overflow issues and potential undefined behavior associated with VLAs.
// Therefore, the second approach using dynamic allocation (new) is generally considered better and more flexible in C++ programming. However, it's important to remember that dynamic memory allocation comes with the responsibility of deallocating memory using delete[] to avoid memory leaks.
  
// working with dynamically created arrays  
  // int n;
  // cin>>n;
  // int* arr = new int[n];
  // int inp;
  // for(int i = 0; i < n; i++){
  //   cin>>inp;
  //   arr[i] = inp;
  // }
  // // fun(arr, n);
  // for(int i = 5; i < 10; i++){
  //   arr[i] = i;
  // }
  // fun(arr, 10);
  // we can not resize the array, once the size is fixed, we have to work with that. 
  // we need an array which can be resized for better memory management
  // Enter VECTORS!
  // we don't have to define the vector size, we can keep pushing and deleting elements, the memory allocation will be managed automatically

// defining a vector
  // vector<int> v;

// inserting elements in a vector
  // v.push_back(0);
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // print(v);

// In arrays, there are two parameters that define the length of the array which are:
// 1. Capacity: how many elements can be stored in the array
// 2. Size: how many elements are actually stored inside the array
// for arrays, the capacity is declared and then it is fixed while it is different for vectors
// for vectors, the capacity is dynamically adjusted for inserting more elements into the vector
// everytime the array is full, the capacity is doubled and the size is increased till it hits the capacity and then again, the capacity is doubled
  
// vector capacity and size concpets  
  // vector<int> v;
  // cout<<"Capacity: "<<v.capacity()<< " Size: "<<v.size()<<endl;
  // v.push_back(0);
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // cout<<"Capacity: "<<v.capacity()<< " Size: "<<v.size()<<endl;
  // int n;
  // for(int i = 0; i < 10; i++){
  //   cin>>n;
  //   v.push_back(n);
  //   cout<<"Capacity: "<<v.capacity()<< " Size: "<<v.size()<<endl;
  // }
  // print(v);
  // cout<<endl;

// deleting elements from a vector
  // v.pop_back();
  // print(v);
  // cout<<endl;
  // v.pop_back();
  // print(v);
  // deleting an element from an array: using pop_back() we can delete an element from the last. It's like a LIFO structure.
  
// accessing a certain element in a vector
  // vector<int> v;
  // v.push_back(0);
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // // another method of v[3]
  // cout<<v.at(3)<<endl;
  
// clearing all the elements of a vector
  // vector<int> v;
  // v.push_back(0);
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // print(v);
  // cout<<endl<<"Capacity: "<<v.capacity()<< " Size: "<<v.size()<<endl;
  // v.clear(); // removing all the data stored in the vector, size = 0 but capacity remains the same
  // cout<<"Capacity: "<<v.capacity()<< " Size: "<<v.size()<<endl;
  // Output:
  // 0 1 2 3 
  // Capacity: 4 Size: 4
  // Capacity: 4 Size: 0
  
// vector initialisation methods
// 1. declaration with not data and 0 size
  // vector<int> arr;
  // print(arr);
//2. init with specific starting size and specific elements
  // vector<int> arr2(5,3);
  // print(arr2);
//3. init with specific elements only
  // vector<int> arr3 = {5,3, 4, 2,5};
  // print(arr3);
//4. init with specific elements only
  // vector<int> arr4{5,3, 4, 2,5};
  // print(arr4);
//5. copy/initialising with another existing vector
  // vector<int> arr5 = {1,2,3,4,5};
  // vector<int> arr6 = arr5;
  // vector<int> arr6(arr5);
  // print(arr6);
  
// accessing the first and last elements of a vector
  // vector<char> ch;
  // ch.push_back('a');
  // ch.push_back('b');
  // ch.push_back('c');
  // ch.push_back('d');
  // // getting the first element
  // cout<<ch.front()<<endl;
  // cout<<ch[0]<<endl;
  // //getting the last element
  // cout<<ch.back()<<endl;
  // cout<<ch[ch.size()-1]<<endl;
  // // sizeof(vector_name) this will not give the size of memory occupied by its elements, rather it will have a sum memories taken by the internal structure of the vector like pointers, capacity, and size information.
  // // int siz = sizeof(ch)/sizeof(char);
  // // cout<<ch.size()-1<<" "<<siz<<" "<<sizeof(ch)<<endl;
  
// printing vectors using for-each loop as it's often used with vectors
vector<int> vec = {1,2,3,4,5};
for(auto it:vec){
  cout<<it<<endl;
}
  return 0;
}