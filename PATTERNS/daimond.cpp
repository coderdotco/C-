#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows:";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<n/2 +1){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
    }
}