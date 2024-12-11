#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows :";
    cin>>n;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<n/2 +1){
            nst++;
        }
        else{
            nst--;
        }
        cout<<endl;
    }

}