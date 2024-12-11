#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int d;
    cout<<"enter the limit : ";
    cin>>d;
    int i=1;
    while(i<=d){
        c=a+b;
        b=a;
        a=c;
        i++;
        cout<<c<<endl;
    }
}