#include<iostream>
using namespace std;

template<class T>
T absolute(T n){
    if(n<0){
        return -n;
    }
    else{
        return n;
    }
}

int main(){
    int a=-670;
    float e= 0.56;
    cout<<"Absolute value of a is= "<<absolute(a)<<endl;
    cout<<"Absolute value of e is = "<<absolute(e)<<endl;
    return 0;
}