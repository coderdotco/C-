#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive integer :";
    cin>>n;
    if(n>=0){
        if(n%5==0 ) cout<<"the number is divisble by 5 ";
        else cout<<"the number is not divisble by 5";
    }
    else cout<<"invalid number ! enter the valid number";
}