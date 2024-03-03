#include <iostream>
#include <string>

using namespace std;

int main(){
    int x = 3;
    switch(x){
    case 0: cout<<"x"<<" = "<<"Zero"<<endl;
    break;
    case 1: cout<<"x"<<" = "<<"One"<<endl;
    break;
    case 2: cout<<"x"<<" = "<<"Two"<<endl;
    break;
    case 3: cout<<"x"<<" = "<<"Three"<<endl;
    break;
    default: cout<<"x"<<" = "<<x<<endl;
    
    }
    return 0;
}

