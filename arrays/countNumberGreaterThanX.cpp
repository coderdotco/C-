#include<iostream>
using namespace std;
int main(){
    int arr[]={2,34,5,1,2,5,4};
    int n,count=0;
    cout<<"Enter the number x :";
    cin>>n;
    for(int i=0;i<(sizeof(arr)/4);i++){
        if(arr[i]>n){
            count++;
        }
    }
    cout<<count;
}