#include<iostream>
using namespace std;

class base{
    protected:
    int marks1, marks2;
    public:
    base(int a, int b){
        marks1 = a;
        marks2 = b;
    }
};

class derived : public base{
    protected: int total;
    public:
    derived():base(5,60){
        total =0;
    }
    void calculate(){
        cout<<"Total marks= "<<marks1+marks2;
    }
};

int main(){
    derived d1;
    d1.calculate();
    return 0;
}