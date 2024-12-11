#include<iostream>
using namespace std;
int main()
{
    int cp;
    int sp;
    cout<<"enter the cost price :";
    cin>>cp;
    cout<<endl<<"enter the selling price :";
    cin>>sp;
    int profit;
    profit=sp-cp;
    float prp;
    if(profit<=0) cout<<endl<<"seller has  not done any profit ";
    else{
        prp=(float)profit ;
        cout<<endl<<"the profit percentage is "<<prp;
    }
}