#include<iostream>
using namespace std;

class A
{
    protected:
    int x, y;
    public:
    void assign(){
        x =10;
        y=10;
    }
};
class B: public  A{
    protected: int s;
    public:
    void add(){
        s=x+y;
        cout<<"sum= "<<s<<endl;
    }
};

class C: public A{
    protected: int t;
    public: void subtract(){
        t=x-y;
        cout<<"Difference ="<<t<<endl;
    }

};
class D: public A{
    protected: int m;
    public:
    void multiply(){
        m =x*y;
        cout<<"product ="<<m<<endl;
    }
};

int main(){
    B s;
    C d;
    D p;
    s.assign();
    s.add();
    d.assign();
    d.subtract();
    p.assign();
    p.multiply();
    return 0;
}