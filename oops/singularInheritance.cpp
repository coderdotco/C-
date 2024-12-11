#include<iostream>
using namespace std;

class Scooty{
public:
    int topSpeed;
    float milage;
private:
    int bootSpace;
};
/* derived class is been made by this way where we have to write from which class is been taking
values and also from which part public or private part . means that class will have all the data members
of that class and also additional data member we have been using in it  .
*/
class Bike : public Scooty{  // derived class
public:
    int gears;

};

int main(){
    Bike b1;
    b1.gears=4;
    b1.topSpeed=180;
    b1.milage=55.4;

}