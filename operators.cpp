#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;

    // Arithmetic opreators->+, -, *, /, %
    cout<<a+b<<endl;


    cout<<a++<<endl; // first print and then increment
    cout<<a++ + ++a<<endl;

    // -------------------------

    // Assignment operators-> =, +=, -=, *=, /=
    a+=b;
    cout<<a<<endl;

    // ---------------------------

    // Relational operators=> ==, !=, >, >=, <, <=
    bool value=a<b;
    cout<<value;

    // ---------------------------
    // logical operators-> &&, ||, !
    bool ans=(a>10)&& (b<20);
    cout<<ans<<endl;

}