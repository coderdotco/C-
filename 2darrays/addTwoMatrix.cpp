#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{1,2,3},{1,2,3}};
    int brr[2][3]={{1,1,1},{1,1,1}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    
}