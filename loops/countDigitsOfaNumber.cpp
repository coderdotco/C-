#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int i=1;
    int digit,count=0;
    while(n!=0){
        count++;
        n=n/10;

    }
    cout<<"digits are "<<count;
}