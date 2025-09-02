#include<iostream>
using namespace std;

class number{
    int x,y;
    public:
    void divide(int p, int q){
        try{
            if(q==0){
                throw q;
            }
            else{
                cout<<"Quoitent= "<<p/q<<endl;
            }
        }
        catch(int q){
            cout<<"Determinant is zero(0)"<<endl;
            throw 23;
        }
        cout<<"Going out of class"<<endl;
    }

};

int main(){
    number n1, n2;
    try{
    n1.divide(4,2);
    n2.divide(4,0);}
    catch(int a){
        cout<<"Division impossible by zero";

    }
    return 0;

}