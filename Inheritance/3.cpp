#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    char name[30];
    public:
    void get_data(){
        cout<<"Enter name and roll number"<<endl;
        cin>>name>>roll_no;
    }
    void put_data(){
        cout<<name<<roll_no<<endl;
    }
};

class test: public student
{ protected:
    float sub1, sub2;
  public:
    void get_marks(float a, float b){
        sub1= a;
        sub2=b;
    }  

    void put_marks(){
        cout<<sub1<<" "<<sub2<<endl;
    }
};

class result: public test{
    protected:
    float total;
    public:
    void display(){
        student::put_data();
        test::put_marks();
        total=sub1+sub2;
        cout<<"total= "<<total<<endl;
    }

};

int main(){
    result obj1;
    obj1.get_data();
    obj1.get_marks(56.34,79.00);
    obj1.display();
    return 0;
}