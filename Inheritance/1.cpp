#include<iostream>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"I can eat!!"<<endl;
    }
    void sleep(){
        cout<<"I can sleep"<<endl;
    }

};

class dog  : public animal{
    public:
    void bark(){
        cout<<"i can bark"<<endl;
    }
};

int main(){
    dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
    return 0;

}
