#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows :";
    cin>>n;
    int nsp=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        nsp--;
        cout<<endl;
    }
}
