#include<iostream>

#include<algorithm>
using namespace std;
int main(){
    string s="trupal";
    int n=s.length();
    reverse(s.begin ()  ,s.begin () + n/2);
    cout<<s;

}