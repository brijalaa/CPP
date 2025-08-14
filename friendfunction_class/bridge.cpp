#include<iostream>
using namespace std;

class mango;
class apple{
    int x;
    public:
    void getdata(){
        cout<<"Enter a number:"<<endl;
        cin>>x;
    }
    friend void add(apple, mango);
};

class mango{
    int y;
    public:
    void getdata(){
        cout<<"Enter another number:"<<endl;
        cin>>y;
    }
    friend void add(apple, mango);

};

void add(apple a1, mango m1){
    int sum= a1.x+m1.y;
    cout<<"sum= "<<sum<<endl;
}

int main(){
    apple a;
    mango m;
    a.getdata();
    m.getdata();
    add(a,m);
    return 0;
}