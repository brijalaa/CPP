#include<iostream>
using namespace std;

class alpha{
    protected: int s;
    public:
    alpha(int a){
        s=a;
        cout<<"Alpha Constructed"<<endl;
    }
};

class beta{
    protected: int a, b;
    public:
    beta(int x, int y){
        a=x;
        b=y;
         cout<<"Beta Constructed"<<endl;
    }
   
};

class gamma: public alpha, public beta{
    protected: int u , v;
    public:
    gamma(int a, int b, int c):alpha(a), beta(c,c){
        u=a;
        v=b;
        cout<<"Gamma Constructes"<<endl;
    }
    void show(){
        cout<<s<<"\n"<<a<<" "<<b<<"\n"<<u<<" "<<v;
    }
};

int main(){
    gamma g1(2, 3, 9);
    g1.show();
    return 0;

}
