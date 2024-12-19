#include <iostream>
using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter the first operand: ";
//     cin>>a;
//     cout<<"Enter the second operand: ";
//     cin>>b;

//     char op;
//     cout<<"Enter the operation to perform: ";
//     cin>>op;

//     switch(op){
//         case '+': cout<<(a+b)<<endl;
//         break;

//         case '-': cout<<(a-b)<<endl;
//         break;

//         case '*': cout<<(a*b)<<endl;
//         break;

//         case '/': cout<<(a/b)<<endl;
//         break;

//         default: cout<<"Enter a valid operation."<<endl;
//     }
//     return 0;
// }

// int printCounting(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int a;
//     cout << "Enter the number: ";
//     cin >> a;
//     printCounting(a);
// }


// void evenOdd(int num){
//     if(num%2==0){
//         cout<<"The number is even.";
//     }
//     else{
//         cout<<"The number is odd.";
//     }
// }
// int main(){
//     int a;
//     cout<<"Enter the number: ";
//     cin>>a;
//     evenOdd(a);
// }


//Power of a number.
// void pow(int num, int pow){
//     int ans=1;
//     for(int i=1;i<=pow;i++){
//         ans=num*ans;
//     }
//     cout<<ans;
// }
// int main(){
//     int a;
//     int b;
//     cout<<"Enter the number: ";
//     cin>>a;
//     cout<<"Enter the exponent: ";
//     cin>>b;
//     pow(a,b);
// }


//nCr
// int fact(int num){
//     int n=1;
//     for (int i=1;i<=num;i++){
//         n=n*i;
//     }
//     return n;
// }
// int nCr(int a, int b){
//     int result;
//     result=(fact(a)/(fact(b)*fact(a-b)));
//     return result;
// }
// int main(){
//     int N;
//     cout<<"Enter n: ";
//     cin>>N;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     cout<<nCr(N,r)<<endl;
// }


//PASS BY VALUE-> In Pass by Value method, a variable's actual value is copied and then passed to the function instead of the original variable.
// As the result, any changes to the parameter inside the function will not affect the variable's original value outside the function. 
//Althogh it is easy to understand and implement, this method is not so useful for large size of data structures at it involves copying the value.
// C++ program to illustrate the pass by value

// function to swap variables
int add(int a, int b)
{
    cout << "In add function, before adding." << endl;
    cout << "a is stored at address " << &a << " with value " << a << endl;
    cout << "b is stored at address " << &b << " with value " << b << endl;
    a = (a + b);
    cout << "In add function, after adding." << endl;
    cout << "a is stored at address " << &a << " with value " << a << endl;
    cout << "b is stored at address " << &b << " with value " << b << endl;
    return a;
}
int main()
{
    int x = 12;
    int y = 9;
    cout << "Before add function." << endl;
    cout << "x is stored at address " << &x << " with value " << x << endl;
    cout << "y is stored at address " << &y << " with value " << y << endl;
    int z = add(x, y);
    cout << "After add function." << endl;
    cout << "x is stored at address " << &x << " with value " << x << endl;
    cout << "y is stored at address " << &y << " with value " << y << endl;
    cout << "z is stored at address " << &z << " with value " << z << endl;
    return 0;
}