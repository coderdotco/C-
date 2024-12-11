// D Alphabet pattern printing
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==1|| (i==1 || i==n) && j<=n-1 || j==n && ( i>1 && i<n)){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}