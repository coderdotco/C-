#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    cout<<"Enter the two number :";
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y;
}
