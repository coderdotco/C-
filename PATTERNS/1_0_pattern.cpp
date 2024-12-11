#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==j || (i+j)%2==0 ) cout<<"1"<<" ";
            if((i+j)%2!=0) cout<<"0"<<" ";
        }
        cout<<endl;
    }
}