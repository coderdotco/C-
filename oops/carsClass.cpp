#include<iostream>
using namespace std;


class Car{
public:
    string name;
    int seater;
    string type;
    int price;

};

void print(Car c){
    cout<<"Name : "<<c.name<<endl;
    cout<<"Price : "<<c.price<<endl;
    cout<<"Seater : "<<c.seater<<endl;
    cout<<"Type : "<<c.type<<endl;
}

void change(Car c){
    c.name="Audi a3";
}
int main(){
    Car c1;
    c1.name="Maruti Swift ";
    c1.price=700000;
    c1.seater=5;
    c1.type="HatchBack";
    print(c1); //to print objects 
    change(c1); // this show class is a pass by value thing 
    print(c1);
    
}


