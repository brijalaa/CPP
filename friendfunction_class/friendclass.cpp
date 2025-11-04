#include<iostream>
using namespace std;

class B;
class A{
    int x;
    int y;
    public:
    void enter(){
        cout<<"Enter x and y:";
        cin>>x>>y;
    }
    friend class B;
};

class B{
    public:
    void display(A k){
        cout<<k.x<<endl<<k.y;
    }

};

int main(){
    A obj1;
    B obj2;
    obj1.enter();
    obj2.display(obj1);
}