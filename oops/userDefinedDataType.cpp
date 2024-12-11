#include<iostream>
#include<vector>
using namespace std;

class Student{ //Student is a new datatype

public:
    string name;
    int rollno;
    float gpa;

};

int main(){
    Student one;
    one.gpa=9.5;
    one.rollno=55;
    one.name="rahul";

    Student two;
    two.rollno=56;
    two.gpa=6.9;
    two.name="trpm";
}