#include<iostream>
using namespace std;

class Item{
    public:
    int id;
    Item(int _id): id(_id){}
    
};
 
int main(){
    Item* ptr = new Item(101);
    cout<< ptr->id<<endl;
    delete ptr;
    ptr=nullptr;
   
}