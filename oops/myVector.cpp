#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size=0;
        capacity=1;
        arr=new int [1];
    }

    void add(int ele){
        if(size==capacity){
            capacity*=2;
            int* arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++]=ele;
    }

    int get(int idx){
        return arr[idx];
    } 

    void remove(){
        size--;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Vector v;
    v.add(10);
    v.print();
    v.add(15);
    v.print();
    v.add(1);
    v.print();
    cout<<v.get(1)<<endl;
    v.remove();
    v.print();

}