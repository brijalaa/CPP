#include<iostream>
using namespace std;

 class base{
    public:
     base(){
        cout<<"Base class constructor"<<endl;
     }
     ~base(){
        cout<<"Base class deconstructor"<<endl;
     }
 };

 class derived: public base{
    public:
    derived(){
        cout<<"Derived class constructor"<<endl;

    }
    ~derived(){
        cout<<"Derived class Deconstructor"<<endl;
    }
 };

 int main(){
    derived d1;
    return 0;
 }