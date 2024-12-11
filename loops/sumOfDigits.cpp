#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int i=1;
    int sum=0,count=0,digit;
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;

    }
    cout<<"sum is "<<sum;
}