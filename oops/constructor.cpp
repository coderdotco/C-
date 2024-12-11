#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;
    
    //contructor 

    Student(){ // default constructor - default if not made - cant see it 

    }

    Student(string s,int r,float g){ //Parameterised constructor -made by user
        name=s;
        rno=r;
        gpa=g;

    }

};

int main(){
    Student s1("rahul",76,9.8); 
    
    Student s2;
    s2.gpa=9.9;
    s2.name="prem";
    s2.rno=66;

    Student s3(s1); //deep copy 
    Student s4=s1; // deep copy // used to copy one data to another
    
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
}