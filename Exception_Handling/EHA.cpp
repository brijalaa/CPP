#include<iostream>
using namespace std;

int main(){
    int son_age, mom_age;
    cout<<"Enter the age of mom and son"<<endl;
    try{
        cout<<"mom: "<<endl;
        cin>>mom_age;
        cout<<"Son: ";
        cin>>son_age;
        if(mom_age<son_age){
            throw 99;
        }
        else{
            cout<<"Age difference ="<<mom_age-son_age<<endl;
        }
    }
    catch(int a){
        cout<<"Mom's age cannot be less than that of son"<<endl;
    }
    cout<<"End of program";
    return 0;

}