#include<iostream>
using namespace std;

int main(){
    // cout << "Jai Bajrang Bali" <<endl;

    // ----------------*******----DATA TYPES & VARIABLES----********-------------------


    // int a = 123;
    // cout << a << endl;

    // char ch = 'h'; //Only single character can be assigned inside single inverted commas (' ')
    // cout << ch << endl;

    // bool b= true;
    // cout << b << endl;

    // float f = 1.5;
    // cout << f << end
    // double dbl=1.34;
    // cout << dbl << endl;

    // cout << sizeof(a)<< endl;
    // cout << sizeof(ch)<< endl;
    // cout << sizeof(b)<< endl;
    // cout << sizeof(f)<< endl;
    // cout << sizeof(dbl)<< endl;

    //-------------------********----TYPE CASTING-------*******------------------------

    int a = 'a';
    cout << a << endl;  //'a' is type casted to ASCII value 97(int)

    char ch = 98;
    cout << ch << endl; //98 is type casted to *b* in ASCII table(character)

    char ch1 = 123456;
    cout << ch1 << endl;  //overflow in conversion from 'int' to 'char' changes value from '123456' to '64' [-Woverflow]


}