#include<iostream>
using namespace std;

class complex{
    float x,y;
    public:
    complex(){
        x= 0.0;
        y= 0.0;
    }
    complex(float a , float b){
        x=a;
        y=b;
    }
    complex operator +(complex);
    complex operator -(complex);
    void display();
};

complex complex:: operator +(complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}
complex  complex::operator -(complex c){
    complex temp;
    temp.x = x - c.x;
    temp.y = y - c.y;
    return temp;
}
void complex :: display(){
    cout<<x<<"+i"<<y<<endl;
}

int main(){
    complex  c3, c4;
    complex c1(5.0,6.0);
    complex c2(4.0,6.0);
    c3 = c1 + c2;
    c3.display();
    c4 = c1 - c2;
    c4.display();
    return 0;

}