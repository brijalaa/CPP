#include<iostream>
using namespace std;

class unary{
    int count;
    public:
    unary(){
        count=0;
    }
    void operator ++(){
        ++count;
    }
    void display(){
        cout<<count;
    }
};

int main(){
    unary obj1,obj2;
    ++obj1;
    ++obj2;
    ++obj2;
    obj1.display();
}