#include<iostream>
using namespace std;

class array{
    int a[10];
    public:
    array(int b[], int s){
        for (int i=0; i<10; i++){
            a[i]=b[i];
        }
    }
    int operator [](int index){
        if(index<0||index>10){
            cout<<"Data doesnt exist";
        }
        return a[index];  
    }

};

int main(){
    int a1[]={1,23,44,55,55,34,24,1,5,90};
    array A(a1,10);
    cout<<"Third element is = "<<a1[2]<<endl;
    a1[2]=100;
    cout<<"Third element is = "<<a1[2]<<endl;
}