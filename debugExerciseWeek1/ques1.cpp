// Debug the code. Take input a character, print 1, if its a 
// capital alphabet, print 0, if its a lowercase alphabet, else print -1.
//this is changed
#include<iostream> 
using namespace std;

int main() {
	char c;
    cin>>c;
    if(97 <=c && c<= 97 + 'z'){
        cout<<0<<endl;
    }
	else if(65 <=c && c<= 65 + 'Z'){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}