#include<iostream>
using namespace std;

template<class T1, class T2>
class ABC{
    T1 a;
    T2 b;
    public:
    ABC(T1 x, T2 y){
        a= x;
        b=y;

    }
    void show();
};

template<class T1, class T2>
void ABC<T1,T2>::show(){
    cout<<a<<" & "<<b<<endl;
}

int main(){
    ABC<int, float>obj1(4,5.56);
    cout<<"Contents of obj 1 are = ";
    obj1.show();
    ABC<char, double>obj2('C',99.99);
    cout<<"Contents of obj 2 are = ";
    obj2.show();
}