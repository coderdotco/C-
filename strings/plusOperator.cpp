#include<iostream>
using namespace std;
int main(){
    string s="trupal";
    s=s +" mewada"; //postfix
    s="mewada " + s; //prefix
    cout<<s;

}