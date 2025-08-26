#include<iostream>
using namespace std;

class student{
    int id;
    public:
    student(int a):id(a){}
    student(student& obj){
        id = obj.id;
    }
    int display(){
        return(id);
    }
};

int main(){
    student s1(200);
    student s2(s1);
    student s3= s1;
    student s4 = s3;
    cout<<"The ID of s1= "<<s1.display()<<endl;
    cout<<"The ID of s2= "<<s2.display()<<endl;
    cout<<"The ID of s3= "<<s3.display()<<endl;
    cout<<"The ID of s4= "<<s4.display()<<endl;
    return 0;
}