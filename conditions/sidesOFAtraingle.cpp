#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side 1 :";
    cin>>a;
    cout<<endl<<"enter the side 2 :";
    cin>>b;
    cout<<endl<<"enter the side 3 :";
    cin>>c;

    if(a+b >c and b+c >a and c+a > b) cout<<"the sides can be a traingle";
    else cout<<"the sides cannot be a traingle";
}