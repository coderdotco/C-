// H alphabet pattern printing
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1 ;j++){
            if(j==1 || j==n || (i==n/2 +1 )&& j<=n){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}