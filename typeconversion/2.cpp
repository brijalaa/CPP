#include<iostream>
using namespace std;

class celsius{
    float temp;
    public:
    celsius(){
        temp=0;
    }
     operator float(){
        float fer;
        fer= (temp*9/5)+32;
        return fer;
     }
     void gettemp(){
        cout<<"Enter the temrature in celsius:"<<endl;
        cin>>temp;
     }
};

int main(){
    celsius c1;
    float k;
    c1.gettemp();
    k =c1; //k = float(c1);
    cout<<"Temprature in farenheit: "<<k<<"F";
    return 0;
}