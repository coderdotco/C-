#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Chai{
    public:
        //data member(attributes)
        string teaName; //name of tea
        int servings;   //number of serving
        vector<string> ingerdients;  //list of ingerdients

        void displayChaiDetails(){
            cout<<"Tea Name :"<<teaName<<endl;
            cout<<"No of servings :"<<servings<<endl;
            cout<<"Ingredients :";
            for( string ingredient : ingerdients){
                cout<<ingredient<<" ";
            }
            cout<<endl;

        }

};


int main(){
    Chai chaione;
    chaione.teaName="Lemon Tea";
    chaione.servings=2;
    chaione.ingerdients={"Water","lemon","honey"};
    
    chaione.displayChaiDetails();
}
