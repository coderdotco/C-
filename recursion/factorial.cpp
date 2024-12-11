#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 or n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the limit ;";
    cin>>n;
    int f=fact(n);
    cout<<f;
}