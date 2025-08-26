#include<iostream>
using namespace std;

class item{
    static int count;
    float price;
    public:
    void get_data(float a){
        price =a;
        count++;
    }
    void show_data(){
        cout<<"count = "<<count<<endl;
    }
};
int item::count;

int main(){
    item a1, a2, a3;
    a1.get_data(56.44);
    a2.get_data(56.99);
    a3.get_data(5.5);
    a1.show_data();
    a2.show_data();
    a3.show_data();
    return 0;
}