#include<iostream>
using namespace std;

class time{
    int hours , minutes;
    public:
    void  get_data(int h, int t){
        hours= h;
        minutes =t;
    }
    void display(){
        cout<<hours<<":"<<minutes;
    }
    void sum(time, time);
};

void time:: sum(time t1,time t2){
    minutes=t1.minutes + t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours= hours+ t1.hours + t2.hours;
}

int main(){
    time t1 , t2, t3;
    t1.get_data(4, 63);
    t2.get_data(6,89);
    t3.sum(t1,t2);
    t3.display();
}