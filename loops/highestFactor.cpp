#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int highfactor=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            highfactor=i;
        }
    }
    cout<<"the highest factor of "<<n<<" other than number itself is "<<highfactor;
}