#include<iostream>
using namespace std;

class space{
    int x,y,z;
    public:
    space(){
        x=0;
        y=0;
        z=0;
    }
    space(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout<<x<<","<<y<<","<<z<<endl;
    }
    friend void operator -(space &s){
        s.x=-s.x;
        s.y=-s.y;
        s.z=-s.z;
    }

};

int main(){
    space s1;
    space s2(20, -39, -60);
    s2.display();
    -s2;
    s2.display();
    return 0;

}