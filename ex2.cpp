// Is number prime or not

#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    bool a=true;
    // 6: 2 to (6-1) check for %
    cin>>n;
    for(i=2;i<=(n-1);i++){
        if(n%i==0){
            a=false;
            break;
        }
        
    }
    if (a){
        cout<<"prime";
    }
    else{
        cout<<"It is not prime";
    }
}