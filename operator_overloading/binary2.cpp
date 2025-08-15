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
    friend complex operator +(complex, complex);
    friend complex operator -(complex, complex);
    void display();
};

 complex  operator +(complex c,complex k){
    complex temp;
    temp.x = k.x + c.x;
    temp.y = k.y + c.y;
    return temp;
}
 complex operator -(complex c, complex k){
    complex temp;
    temp.x = c.x - k.x;
    temp.y = c.y - k.y;
    return temp;
}
void complex :: display(){
    cout<<x<<"+i"<<y<<endl;
}

int main(){
    cout<<"The example of Binary Operator :"<<endl;
    complex  c3, c4;
    complex c1(5.0,6.0);
    cout<<"Complex 1 is:";
    c1.display();
    complex c2(4.0,6.0);
    cout<<"Complex 2 is:";
    c2.display();
    c3 = c1 + c2;
    cout<<"Their sum is:";
    c3.display();
    c4 = c1 - c2;
    cout<<"Their difference is:";
    c4.display();
    return 0;

}