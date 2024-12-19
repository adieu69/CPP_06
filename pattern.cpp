//-------------------***************----------PATTERNS---********------------------------
#include <iostream>
using namespace std;

//***
//***
//***

// int main(){
//     int i=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

// }


//111
//222
//333
// int main(){
//     int i=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


//1234
//1234
//1234
//1234
// int main(){
//     int i=1;
//     while(i<=4){
//         int j=1;
//         while(j<=4){
//             cout<<j<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// 123
// 456
// 789
// int main(){
//     int i=1;
//     int count=1;
//     while(i<=3){
//         int j=1;
//         while(j<=3){
            
//             cout<<count;
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// *
// **
// ***
// ****
// int main(){
//     int i=1;
//     while(i<=4){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



//1
//22
//333
//4444
// int main(){
//     int i=1;
//     while(i<=4){
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



//1
//2 3
//4 5 6
//7 8 9 10
// int main(){
//     int i=1;
//     int count=1;
//     while(i<=4){
//         int j=1;
//         while(j<=i){
//             cout<<count<<" ";
//             j=j+1;
//             count=count+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


//1
//1 2
//2 3 4
//4 5 6 7
int main(){
    int i=1;
    int count=1;
    while(i<=4){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
            i=i+1;
        }
        cout<<endl;
        i=i+1;
    }
}