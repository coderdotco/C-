#include<iostream>
using namespace std;
int main(){
    int arr[]={2,34,5,1,2,5,4};
    int n=sizeof(arr) /4;
    for(int i=0,j=n-1;i<n/2 && j>=n/2;i++,j--){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}