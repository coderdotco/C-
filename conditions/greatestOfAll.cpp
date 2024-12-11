#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three numbers :";
    cin>>a>>b>>c;
    if(a>b and a>c ) cout<<"greatest is "<<a;
    else if(b>c and b>a ) cout<<"greatest is "<<b;
    else cout<<"gretest is "<<c;
}