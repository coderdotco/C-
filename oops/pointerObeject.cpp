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

void change(Cricketer* c){
    (*c).runs=11000; // two ways to write pointers (*c) or c-> 
    c->name="KLr";
}

int main(){
    Cricketer c1("Virat kohli",25000);
    cout<<c1.runs<<endl<<c1.name<<endl;
    change(&c1); // since it is pass by vlaue we can use pointer to chance value in functions
    cout<<c1.runs<<endl<<c1.name<<endl;
    
    //Cricketer c2("Rohit sharma",18000);

}