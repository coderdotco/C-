#include<iostream>
using namespace std;
int fibo(int n){
    if(n==2 or n==1) return 1;
    return fibo(n-1) +fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the nth fibonachi term number :";
    cin>>n;
    cout<<fibo(n);
}