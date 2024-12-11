//B ALPHABET PATTERN PRINTING
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==1 || ((i==1 || i==n/2 +1 || i==n) && ( j>1 && j<=n)) ||
            j==n+1 && ((i>1 && i<n/2 +1) || (i>n/2 +1 && i<n))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}