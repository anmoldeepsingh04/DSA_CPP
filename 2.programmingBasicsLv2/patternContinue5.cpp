#include <iostream>

using namespace std;

int main(){
    
    // full pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < 5 - rows - 1; cols++){
    //         cout<<" ";
    //     }
    //     for(int cols = 0; cols < rows + 1; cols++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // inverted full pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < rows; cols++){
    //         cout<<" ";
    //     }
    //     for(int cols = 0; cols < 5 - rows; cols++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // diamond pattern
    // int n = 30;
    // for(int rows = 0; rows < n; rows++){
    //     if(rows<n/2){
    //         for(int cols = 0; cols < n/2 - 1 - rows; cols++){
    //             cout<<" ";
    //         }
    //         for(int cols = 0; cols < rows + 1; cols++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int cols = 0; cols < rows - n/2; cols++){
    //             cout<<" ";
    //         }
    //         for(int cols = 0; cols < n - rows; cols++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;

    //     }
    
    // }

    // hollow pyramid
    // for(int rows = 0; rows < 4; rows++){
    //     for(int cols = 0; cols < 4 - rows - 1; cols++){
    //         cout<<" ";
    //     }
    //     for(int cols = 0; cols < rows + 1; cols++){
    //         if(cols == 0 || cols == rows){cout<<"* ";}
    //         else{cout<<" ";}
    //     }
    //     cout<<endl;
    // }

    // inverted hollow pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < rows; cols++){
    //         cout<<" ";
    //     }
    //     for(int cols = 0; cols < 5 - rows; cols++){ 
    //         if(cols == 0 || cols == 5 - rows - 1) cout<<"* ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // hollow diamond
    // for(int rows = 0; rows < 8; rows++){
    //     if(rows < 4){
    //         for(int cols = 0; cols < 4 - rows - 1; cols++){
    //             cout<<"  ";
    //         }
    //         for(int cols = 0; cols < 2*rows + 1; cols++){
    //             if(cols == 0 || cols == 2*rows) cout<<"* ";
    //             else cout<<"  ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int cols = 0; cols < rows - 4 ; cols++){
    //             cout<<"  ";
    //         }
    //         for(int cols = 0; cols < 2*(7 - rows) + 1; cols++){
    //             if(cols == 0 || cols == 2*(7 - rows)) cout<<"* ";
    //             else cout<<"  ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // inverse hollow diamond
    // for(int rows = 0; rows < 8; rows++){
    //     if(rows < 4){
    //         for(int cols = 0; cols < 4 - rows; cols++){
    //             cout<<"* ";
    //         }
    //         for(int cols = 0; cols < 2*rows + 1; cols++){
    //             cout<<"  ";
    //         }
    //         for(int cols = 0; cols < 4 - rows; cols++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int cols = 0; cols < rows - 3; cols++){
    //             cout<<"* ";
    //         }
    //         for(int cols = 0; cols < 15 - 2*rows; cols++){
    //             cout<<"  ";
    //         }
    //         for(int cols = 0; cols < rows - 3; cols++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // Star and Number
    // for(int rows = 0; rows < 4; rows++){
    //     for(int cols = 0; cols < 2*rows + 1; cols++){
    //         if(cols%2 == 0){
    //             cout<<rows+1<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Star and Number Repeat
    // for(int rows = 0; rows < 7; rows++){
    //     if(rows < 4){
    //         for(int cols = 0; cols < 2*rows + 1; cols++){
    //             if(cols % 2 == 0){
    //                 cout<<rows+1<<" ";
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int cols = 0; cols < 7 - rows; cols++){
    //             if(cols % 2 == 0){
    //                 cout<<(6 - rows)+1<<" ";
    //             }
    //             else{
    //                 cout<<"* ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }

    // Hollow Inverted Half Pyramid
    // for(int rows = 0; rows < 6; rows++){
    //     for(int cols = 0; cols < 6 - rows; cols++){
    //         if(cols == 0 || cols == 6 - rows - 1 || rows == 0) cout<<"* ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // Random Ques
    // for(int rows = 0; rows < 5; rows++){
    //     if( rows == 0 or rows == 5 - 1){
    //         int i = 0;
    //         for(int cols = 0; cols < rows + 1; cols++){
    //             cout<<++i<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         for(int cols = 0; cols < rows + 2; cols++){
    //             if(cols == 0) cout<<1<<" ";
    //             else if(cols == rows + 1) cout<<rows+1<<" ";
    //             else cout<<"_ ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // Alphabet Mania
    // for(int rows = 0; rows < 6; rows++){
    //     int val = 64;
    //     for(int cols = 0; cols < 2*rows + 1; cols++){
    //         if(cols <= rows) cout<<char(++val)<<" ";
    //         else cout<<char(--val)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Numeric Hollow Inverted Half Pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = rows; cols < 5; cols++){
    //         if(cols == rows or cols == 5-1 or rows == 0) cout<<cols+1<<" ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // Numeric Palindrom Equilateral Pyramid
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < 5 - rows; cols++){
    //         cout<<"  ";
    //     }
    //     int val = 0;
    //     for(int cols = 0; cols < 2*rows + 1; cols++){
    //         if(cols <= rows) cout<<++val<<" ";
    //         else cout<<--val<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern Overload!
    // for(int rows = 0; rows < 5; rows++){
    //     for(int cols = 0; cols < 8 - rows; cols++){
    //         cout<<"* ";
    //     }
    //     for(int cols = 0; cols < 2*rows+1; cols++){
    //         if(cols % 2 == 0) cout<<rows+1<<" ";
    //         else cout<<"* ";
    //     }
    //     for(int cols = 0; cols < 8 - rows; cols++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Solid Half Diamond
    // for(int rows = 0; rows < 7; rows++){
    //     if(rows < 4){
    //         for(int cols = 0; cols < rows+1; cols++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         for(int cols = 0; cols < 7 - rows; cols++){
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Floy'd Triangle
    // int val = 1;
    // for(int rows = 0; rows < 6; rows++){
    //     for(int cols = 0; cols < rows+1; cols++){
    //         cout<<val++<<" ";
    //     }
    //     cout<<endl;
    // }

    // Butterfly Pattern
    // for(int rows = 0; rows < 8; rows++){
    //     if(rows < 4){
    //         for(int cols = 0; cols < rows+1; cols++){
    //             cout<<"* ";
    //         }
    //         for(int cols = 0; cols < 6 - 2*rows; cols++){
    //             cout<<"  ";
    //         }
    //         for(int cols = 0; cols < rows+1; cols++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         for(int cols = 0; cols < 8 - rows; cols++){
    //             cout<<"* ";
    //         }
    //         for(int cols = 0; cols < 2*rows - 8; cols++){
    //             cout<<"  ";
    //         }
    //         for(int cols = 0; cols < 8 - rows; cols++){
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    return 0;
}