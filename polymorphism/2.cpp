#include<iostream>
using namespace std;

class animal{
    public:
    virtual void display(){
        cout<<"From Base class Animal"<<endl;
    }
};

class dog: public animal{
    public:
    void display(){
        cout<<"From class Dog"<<endl;
    }
};

class cow: public animal{
    public:
    void display(){
        cout<<"From class cow"<<endl;
    }
};

int main(){
    animal* aptr;
    animal anm;
    dog dg;
    cow cw;
    aptr = &anm;
    aptr->display();
    aptr = &dg;
    aptr-> display();
    aptr = &cw;
    aptr-> display();
    return 0;
}