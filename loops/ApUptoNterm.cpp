#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the nth term :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a+=2;
    }
}
