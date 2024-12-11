#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers :";
    cin>>n;
    for(int j=1;j<=n;j++){
        int fact=1;

        for(int i=1;i<=j;i++){
        fact=fact*i;
        }
    cout<<"factorial of "<<j<<" is "<<fact<<endl;
    }
}