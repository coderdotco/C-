#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the x and y cordinate of the point :";
    cin>>x>>y;
    if( (x>=0 and y>=0 )){
        cout<<"1st Quadrant ";
        if(x==0 ) cout<<endl<<"lies on x axis" ;
        else if(y==0 ) cout<<endl<<"lies on y axis";
        else cout<<endl<<"does not lies on any axis ";
    }
    else if( (x<=0 and y>=0 )){
        cout<<"2nd Quadrant ";
        if(x==0 ) cout<<endl<<"lies on x axis" ;
        else if(y==0 ) cout<<endl<<"lies on y axis";
        else cout<<endl<<"does not lies on any axis ";
    }
    else if( (x<=0 and y<=0 )){
        cout<<"3rd Quadrant ";
        if(x==0 ) cout<<endl<<"lies on x axis" ;
        else if(y==0 ) cout<<endl<<"lies on y axis";
        else cout<<endl<<"does not lies on any axis ";
    }
    else if( (x>=0 and y<=0 )){
        cout<<"4th Quadrant ";
        if(x==0 ) cout<<endl<<"lies on x axis" ;
        else if(y==0 ) cout<<endl<<"lies on y axis";
        else cout<<endl<<"does not lies on any axis ";
    }


}