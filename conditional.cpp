#include<iostream>
using namespace std;
int main(){
    int fn;
    cout<<"Enter First number: ";
    cin>>fn;
    int sn;
    cout<<"Enter second number: ";
    cin>>sn;
    char op;
    cout<<" Enter the operator(+,-,*,/,%): ";
    cin>>op;
    
    if (op=='+'){
        cout<<fn+sn;
    }
    else if(op=='-'){
        cout<<fn-sn;
    }
    else if(op=='*'){
        cout<<fn*sn;
    }
    else if(op=='%'){
        cout<<fn%sn;
    }
    else if(op=='/'){
        cout<<fn/sn;
    }
    else{
        cout<<"invalid input";
    }
}