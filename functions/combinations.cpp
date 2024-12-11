#include<iostream>
using namespace std;
int fact(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int main(){
    int n;
    cout<<"enter the n :";
    cin>>n;
    int r;
    cout<<endl<<"enter the r :";
    cin>>r;
    int nfact =fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    cout<<nfact/(rfact *nrfact);
}