#include<iostream>
using namespace std;

class time{
    int hh, mm, ss;
    public:
    time(){
        hh=0;
        mm=0;
        ss=0;
    }
    void operator ()(int h, int m , int s){
        hh =h;
        mm= m ;
        ss= s;
    }
     void show(){
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
     }
};

int main(){
    time t1;
    t1(5,30,43);
    cout<<"Time : ";
    t1.show();
    return 0;

}