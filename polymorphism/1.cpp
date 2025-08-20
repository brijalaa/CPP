#include<iostream>
using namespace std;

class base{
    public:
    int m;
     void display(){
        cout<<"Base class m= "<<m<<endl;
    }

};

class derived: public base{
    public:
    int n;
    void display(){
        cout<<"Derived class, n = "<<n<<endl;
    }
};

int main(){
    base* bptr;
    derived* dptr;
    derived d1;
    bptr = &d1;
    dptr = &d1;
    bptr->m= 10;
    d1.display();
    dptr->base::display();
    return 0;
}