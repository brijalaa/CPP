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
    animal a1;
    cow c1;
    dog dg;
    animal* aptr[]={&a1, &c1,&dg};
    for(int i=0;i<3;i++){
        aptr[i]->display();
    }
    return 0;
}