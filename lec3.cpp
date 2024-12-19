#include <iostream>
using namespace std;

// conditionals and loops

// int main(){
//     int a,b;
//     cin>>a >> b;
//     if(a>b){
//         cout<<"A is greater"<<endl;
//     }
//     else{
//         cout<<"B is greater"<<endl;
//     }

// }

// print whether the character is small case, upper case or a number

// int main(){
//     char a;
//     cin>>a;
//     if(a>=97 && a<=122){
//         cout<<"small case"<<endl;
//     }
//     else if(a>=65 && a<=90){
//         cout<<"Upper case"<<endl;
//     }
//     else{
//         cout<<"Number"<<endl;
//     }
// }

// print numbers form 1 to 5
//  int main(){
//      int i=1,n;
//      cin>>n;
//      cout<<"\n";
//      while(i<=n){

//         cout<<i<<" "<<endl;
//         i=i+1;
//     }
// }

// print sum of numbers from 1 to n
//  int main(){
//      int i,n,sum=0;
//      cin>>n;
//      while(i<=n){
//          sum=sum+i;
//          i=i+1;
//      }
//      cout<<"The sum is: "<<sum;
//  }

// prime number checking

// int main() {
//     int n;
//     int i = 2;  // Start checking from 2
//     int c = 0;

//     cout << "Enter the number: ";
//     cin >> n;

//     // Edge case for numbers less than 2 (0 and 1 are not prime)
//     if (n <= 1) {
//         cout << "Not Prime";
//         return 0;
//     }

//     while (i <= n / 2) {  // Check divisibility up to n / 2
//         if (n % i == 0) {
//             c = 1;  // If divisible, set c to 1
//             break;  // No need to check further if a divisor is found
//         }
//         i = i + 1;
//     }

//     if (c > 0) {
//         cout << "Not Prime";
//     } else {
//         cout << "Prime";
//     }

//     return 0;
// }

// SUM OF EVEN NUMBERS

// int main()
// {
//     int sum = 0;
//     int i=0, n;
//     cout << "Enter the number till you want the sum: ";
//     cin >> n;
//     if (n == 0)
//     {
//         cout << "Sum: 0";
//     }
//     else if (n == 1)
//     {
//         cout << "Sum: 1";
//     }
//     else
//     {
//         while (i <= n)
//         {
//             if (i % 2 == 0)
//             {
//                 sum = sum + i;
//             }
//             i = i + 1;
//         }
//         cout << "Sum: " << sum;
//     }

// }

// --------------------***************--table of farenthite to celcius-----****-----------------

// int main()
// {
//     float f = 0.0, c = 0.0, n;
//     char ch;

//     cout << "Enter the measurement standard (C/F): ";
//     cin >> ch;

//     cout << "Enter the temperature: ";
//     cin >> n;

//     // Convert to Fahrenheit if the input is in Celsius
//     if (ch == 'c' || ch == 'C')
//     {
//         f = (9.0 / 5.0) * n + 32;
//         cout << "The converted value is: " << f << " F" << endl;
//     }
//     // Convert to Celsius if the input is in Fahrenheit
//     else if (ch == 'f' || ch == 'F')
//     {
//         c = (5.0 / 9.0) * (n - 32);
//         cout << "The converted value is: " << c << " C" << endl;
//     }
//     else
//     {
//         cout << "Invalid input! Please enter 'C' for Celsius or 'F' for Fahrenheit." << endl;
//     }

//     return 0;
// }


