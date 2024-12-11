#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of lines :";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char a=i+64;
        for(int j=1;j<=n;j++){
            cout<<a;
        }
        cout<<endl;
    }
}