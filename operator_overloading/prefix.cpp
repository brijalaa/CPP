#include<iostream>
using namespace std;

class counter{
    int count;
    public:
    counter(){
        count=0;
    }
    void showcount(){
        cout<<count;
    }
    friend void operator ++(counter&);
};

void operator ++(counter &c){
    c.count++;
}
int main(){
    counter c1;
    c1.showcount();
    ++c1;
    c1.showcount();
}