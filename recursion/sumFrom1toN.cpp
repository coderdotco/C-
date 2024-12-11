#include<iostream>

int sum(int n){
    if(n==1) return 1;
    else return sum(n-1)+n;
}
int main(){
    int n;
    std::cout<<"Enter the limit :";
    std::cin>>n;
    int s=sum(n);
    std::cout<<"The sum of 1 to "<<n<<" is "<<s;
}