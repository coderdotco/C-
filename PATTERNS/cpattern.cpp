// C ALPHABET PATTERN PRINTING PROGRAM
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==1 || (i==1 || i==n ) && j<=n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}