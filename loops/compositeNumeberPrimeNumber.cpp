#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    bool flag=true; // true means prime
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false; // false means composite 
            break;
        }
        
    }
    if(flag == true ) cout<<"prime number ";
    else cout<<"composite number";
}