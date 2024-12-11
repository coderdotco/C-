#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,34,5,1,2,5,4};
    int max=INT_MIN;
    int n=sizeof(arr)/4 ;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){ 
            smax=arr[i];
            
        }
    }
    cout<<smax;

    

}