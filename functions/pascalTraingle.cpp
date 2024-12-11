#include<iostream>
using namespace std;
int fact(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int ncr(int a,int b){
    return fact(a)/(fact(b)*fact(a-b));
}
int main(){
    int n;
    cout<<"enter the no of lines :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}