#include<iostream>
using namespace std;

class Fraction{
public:
    int num;
    int den;
    Fraction(int num,int den){
        this->num=num;
        this->den=den;
    }

    Fraction operator+(Fraction f){ // this means we can use contructor as a function to do anything
        //the operator+ is the name given to the function
        int newnum=this->num * f.den + this->den*f.num;
        int newden=this->den*f.den;
        Fraction ans(newnum,newden);
        return ans;

    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }


};

int main(){
    Fraction f1(1,4);
    Fraction f2(1,2);
    Fraction f3 =f1 + f2; // since first f1 is writtern means f1 is the first function while f2 is derived from it 
    
    f1.display();
    f2.display();
    f3.display();
    


}