#include<iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Enter the string :";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            count++;
        }
    }
    cout<<"The total no of vowels in the string \'"<<s<<" \' is "<<count;
}