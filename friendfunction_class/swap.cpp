#include<iostream>
using namespace std;
class mango;
class apple{
    int x;
    public:
    void enter(){
        cout<<"Enter x: "<<endl;
        cin>>x;
    }
    void show(){
        cout<<x<<endl;
    }
    void swap(mango &);
};

class mango{
    public:
    int y;

    void enter(){
        cout<<"Enter y: "<<endl;
        cin>>y;
    }
    void show(){
        cout<<y<<endl;
    }
    friend void apple:: swap(mango&);
};

void apple::swap(mango&obj){
    int temp =x;
    x = obj.y;
    obj.y= temp;
}

int main(){
    apple a1;
    a1.enter();
    mango b1;
    b1.enter();
    cout<<"Before swapping: "<<endl;
    a1.show();
    b1.show();
    a1.swap(b1);
    cout<<"After swapping"<<endl;
    a1.show();
    b1.show();
    return 0;

}