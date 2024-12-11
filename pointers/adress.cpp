#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* y=&x;
    cout<<&x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
    int a=12;
    *y=a;
    cout<<x<<endl;

}