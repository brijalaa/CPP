//basictouserdefined
#include<iostream>
using namespace std;

class time{
    int hh,mm,ss;
    public:
    time(){
        hh=0;
        mm=0;
        ss=0;
    }
    time(int s){
        hh=s/3600;
        s=s%3600;
        mm=s/60;
        ss=s%60;
    }

    void display(){
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};

int main(){
    time t1, t2;
    t1= 12760;
    t2 = time(304679);
    cout<<"Time t1= ";
    t1.display();
    cout<<"time t2= ";
    t2.display();
    return 0;
}