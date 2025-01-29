#include <iostream>
using namespace std;
int add(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    int a;
    cout<<"Enter first num"<<endl;
    cin>>a;
    int b;
    cout<<"Enter second num"<<endl;
    cin>>b;
    cout<<add(a,b);

}