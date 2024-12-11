#include<iostream>
using namespace std;

class Student{
public:
    int rno;
    string name;

    Student(){

    }
    Student(int rno,int marks,string name){
        this->marks=marks;
        this->name=name;
        this->rno=rno;

    }
    int getmarks(){ // getter
        return marks; // we cant access marks in main but by functions we can atleast print the value
    }

    void setmarks(int m){ //setter
        marks=m; // by functions we can also change marks 
    } 

private: // its private data member so cant be access outside class
    // we use private suppose if want user to not change specific data members values
    int marks; // here marks is a private data member 
    
};


int main(){
    Student s1(66,96,"rahul");
    s1.setmarks(10);
    cout<<s1.getmarks();



}