#include<iostream>
using namespace std;

class multi{
    public:
    void test(int k){
        try{
        if(k==1){
            throw k;
        }
        else if(k==0){
            throw k;
        }
        else if(k==-1){
            throw 1.22f;
        }
        cout<<"Try block ended"<<endl;
        }
    catch(int a){
        cout<<"Caught a Integer"<<endl;
    }
    catch(float x){
        cout<<"Caught a negative Integer"<<endl;
    }
    }
};

int main(){
    multi a,b,c,d;
    a.test(1);
    b.test(0);
    c.test(-1);
    d.test(3);
    return 0;
}
