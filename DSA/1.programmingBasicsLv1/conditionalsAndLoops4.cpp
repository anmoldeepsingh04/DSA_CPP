#include <iostream>
# include <string>

using namespace std;


string signCheck(int x){
    string check;
    if(x > 0){
        check = "Positive number";
    }
    else if(x < 0){
        check = "Negative number";
    }
    else{
        check = "Zero";
    }
    return check;
}


string evenCheck(int x){
    string check;
    if(x % 2 == 0){
        check = "Even number";
    }
    else{
        check = "Odd number";
    }
    return check;
}

int main(){
    // int x = -8;
    // cout<<signCheck(x)<<endl;
    // cout<<evenCheck(x)<<endl;
    // for(int i = 0; i < 11; i++){
    //     cout<<"Anmol"<<endl;
    // }
    // for(int i = 1; i <= 10; i++){
    //     cout<<19*i<<endl;
    // }
    // for(int i = 1; i <= 100; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }

    // rectangle
    // }
    // for(int i = 0; i < 3; i++){
    //     for(int k = 0; k < 5; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // hollow rectangle
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j<5; j++){
    //         if(i == 0 or i == 4){
    //             cout<<"* ";
    //         }
    //         else{
    //             if( j == 0 or j == 4){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";
    //             }

    //         }
    //     }
    //     cout<<endl; 
    // }

    // half pyramid
    // for(int rows = 0; rows<5; rows++){
    //     for(int cols = 0; cols < rows +1; cols++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // inverted half pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < 5 - rows; cols++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // numeric half pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < rows +1; cols++){
    //         cout<<cols+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // inverted numeric half pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < 5 - rows; cols++){
    //         cout<<cols+1<<" ";
    //     }
    //     cout<<endl;
    // }

    int x = 10;
    if(cout<<x){
        cout<<"Anmol "<<endl;
    }
    return 0;
}