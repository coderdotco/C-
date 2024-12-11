#include<iostream>
using namespace std;

class Cricketer{
public:
    int runs;
    int wicket;
    int matches;
};

class Engineer{
public:
    int experience;
    string typeOfEng;

};

class phodu : public Cricketer,Engineer{ // multiple inheritance class where it is been derived by two upper class
public:
    string hobby;
    string name;

};
int main(){

}