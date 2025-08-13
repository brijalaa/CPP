#include<iostream>

using namespace std;

class point{
    public:
    int x;
    int y;
    point(int _x, int _y){
        x= _x;
        y= _y;
    }
    void display(){
        cout<<x<<" "<<y;
     }
};
 
int main(){
    point p1(50,10);
    p1.display();
}