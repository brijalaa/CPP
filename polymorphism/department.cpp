#include<iostream>
using namespace std;

class department{
    public:
        virtual void display(){
               cout<<"From Department "<<endl;
    }
};

class education:public  department{
    public:
        void display(){
               cout<<"From Education "<<endl;
    }

};

class science: public department{
     public:
        void display(){
               cout<<"From Science"<<endl;
    }
};

class engineering: public department{
     public:
        void display(){
               cout<<"From Engineering "<<endl;
    }

};

class computer: public engineering{
     public:
        void display(){
               cout<<"From Computer Engineering "<<endl;
    }
};
class civil: public engineering{
     public:
        void display(){
               cout<<"From Civil Engineering "<<endl;
    }
};

int main(){
    department d;
    education  e1;
    science s;
    engineering e2;
    computer c1;
    civil c2;
    department *ptr[]={&d,&e1,&s,&e2,&c1,&c2};
    for(int i=0;i<6;i++){
        ptr[i]->display();
    }
}