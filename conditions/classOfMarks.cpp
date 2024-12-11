#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the percentage of the students :";
    cin>>n;
    if(n <100 and n>80) cout<<"very good";
    else if( n<=80 and n>60 ) cout<<"good";
    else if( n<=60  and n >40 ) cout<<"average";
    else cout<<"fail";

}