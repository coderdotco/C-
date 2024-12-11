// I Alphabet Pattern Printing Program
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if((i==1 || i==n) && j<=n || j==n/2 +1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}