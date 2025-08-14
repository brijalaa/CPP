#include<iostream>
using namespace std;

class vector{
    public:
    int n;
    float avg;
    int a[10];
  
    void getdata();
    friend void average(vector);
    
};

void vector::getdata(){
    
        for(int i=0;i<10;i++){
            cin>>a[i];
        }
    
}


void average(vector v1){
    float sum =0;
    for(int i=0;i<10;i++){
        sum+=v1.a[i];
    }
    v1.avg=sum/10;
    cout<<"average= "<<v1.avg<<endl;
}

int main(){
    vector v1;
    cout<<"Enter 10 integers:";
    v1.getdata();
    average(v1);
    
    return 0;
}