// E Alphabet Pattern printing program
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if((i==1 || i==n || i== n/2 +1) && j<n || j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}