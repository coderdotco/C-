//A ALPHABET PATTERN PRINTING
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==(n+1)-i || j==(n-1)+i || (i==(n-2) && j>2 && j<(2*n-2))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;

    }
}