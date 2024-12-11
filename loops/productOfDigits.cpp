#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int i=1;
    int product=1,count=0,digit;
    while(n!=0){
        digit=n%10;
        product=product*digit;
        n=n/10;

    }
    cout<<"product is "<<product;
}