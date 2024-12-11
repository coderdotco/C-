#include<iostream>
using namespace std;
int main(){
    int arr[]={2,34,5,1,2,5,4};
    int n=sizeof(arr) /4;
    int brr[n];
    for(int i=0;i<n;i++){
        brr[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
}