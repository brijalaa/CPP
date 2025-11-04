#include<iostream>
using namespace std;

class box{
    int length;
    public:
    box(int l){
        this->length=l;
    }
    void setlength(int m){
        this->length=m;
    }
    int display(){
        return this->length;
    }
    box* increaselength(int incr){
        this->length+=incr;
        return this;
    }
};
int main(){
    box b(10);
    cout<<"Initial length = "<<b.display()<<endl;
    b.increaselength(5)->increaselength(3)->increaselength(15);
    cout<<"Final length="<<b.display()<<endl;
    return 0;
}