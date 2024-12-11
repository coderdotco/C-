#include<iostream>
using namespace std;
void print(int a,int n) {
    if(a>n ) return;
    cout<<a<<endl;
    print(a+1,n);
}
int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    print(1,n);
}