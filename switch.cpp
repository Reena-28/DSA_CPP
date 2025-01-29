#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your age"<<endl;
    cin>>a;
    switch(a){
        case 18:
        cout<<"your 18 years old"<<endl;
        break;
        case 20:
        cout<<"ur 20";
        break;
        default:
        cout<<"hiiii";
        return 0;
    }
}