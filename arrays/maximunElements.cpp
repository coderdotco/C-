#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={1,2,3,1,4};
    int mx=INT_MIN;
    for(int i=0;i<5;i++){
        if(mx<arr[i]){
            mx=arr[i];
            
        }
    }
    cout<<mx;

}