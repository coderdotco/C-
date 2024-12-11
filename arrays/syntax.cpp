#include<iostream>
using namespace std;
int main(){
    //integers -> 1,2,3,4,5
    int x[5]; //declaration
    x[0]=1; //initialisation
    
    //2nd way of taking input
    for(int i=1;i<5;i++){
        cin>>x[i];
    }
    //printing the elements 
    for(int i=0;i<5;i++){
        cout<<x[i]<<" ";
    }
}