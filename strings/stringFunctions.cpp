#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="trupal";
    //add a character to string
    //<string_name>.pushback(<charcter>);
    s.push_back('a');
    
    //remove a charctrer from string 
    //<string_name>.popback();
    s.pop_back();

    //add a string to string
    //<string_name>.append(<string>);
    s.append(" hello");
    
    //to clear a whole string 
    //<stirng_name>.clear();
    s.clear();

    //to reverse a string we can use whole method or can use reverse function
    //reverse(<string_name>.begin(),<string_name>.end());
    //means reverse(from where to begin,where to end);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
    //if we want to convert int to string use tosring
    // to_string(<int_variable>);
    int x=343;
    string s=to_string(x);
    
    //if we want to convert string to int use stoi
    //stoi(<string_varibale>);
    string s="232";
    int x=stoi(s);
    

}