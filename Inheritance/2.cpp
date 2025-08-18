#include<iostream>
using namespace std;

class one{
    protected:
    int x =10;
    public: 
    void display1(){
        cout<<x<<endl;
    }
};
class two{
    protected: 
    int y =90;
    public : 
    void display2(){
        cout<<y<<endl;
    }
};
class three: public one, public two{
    int z=70;
    public:
    void display(){
        cout<<z<<endl;
    }
};

int main(){
    three obj1;
    obj1.display1();
    obj1.display2();
    obj1.display();
    return 0;
}