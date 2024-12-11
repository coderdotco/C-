#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name,int runs){
        this->name=name; // this keyword is used to identify that name is not name 
        this->runs=runs;

    }
};
int main(){
    Cricketer c1("Virat kohli",25000);
    Cricketer c2("Rohit sharma",18000);
    
    cout<<"Name :"<<c1.name<<" "<<endl<<"runs :"<<c1.runs<<endl;
    cout<<"Name :"<<c2.name<<" "<<endl<<"runs :"<<c2.runs<<endl;
}

