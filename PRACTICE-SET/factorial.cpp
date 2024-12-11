#include<iostream>
using namespace std;
int main(){
    int n,fact=1,i=1;
    cout<<"enter the limit :";
    cin>>n;
    int a=n;
    while(i<=a){
        fact=fact*i;
        i++;
    }
    cout<<"the factorial of "<<n<<" is "<<fact;

}