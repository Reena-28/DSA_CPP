#include<iostream>
using namespace std;
int main(){
    // variables names are called as "Identifiers"
    int a=10;
    a=11;
    cout<<sizeof(a)<<endl;
    
    // constants
    const int pi=3.14;

    // Primitive data types
    int c=7;
    float d=8.9f;
    double e=10.7777;
    char f='a';
    bool g=true;
    string h="hello";
    // unsigned int=> only positive

    int age;
    cout<<"Enter your age : ";
    cin>>age;
    cout<< "Your age is: "<<age<<endl;

    // Type casting
    int num=6;
    int num1=7;
    // explicit conversion
    cout<<(float)num1/num<<endl;
    // implicit conversion
    int i=f;
    cout<<i<<endl;

    cout<<"Reena"<<endl<<"HII"<<endl;
    cout<<h;

    // 8 bits= 1 Byte
    // A=65, B=66,...
    // a=97, b=98,....
}
