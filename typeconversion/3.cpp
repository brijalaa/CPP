#include<iostream>
#include<cmath>
using namespace std;

class polar //source class
{
    float rad;
    int angle;
    public:
    polar(){
        rad=0;
        angle=0;
    }

    polar(float r, int ang){
        rad= r;
        angle= ang;
    }
    
    float return_rad(){
        return rad;

    }
    
    int return_ang(){
        return angle;
    }

    void display(){
        cout<<"Angle = "<<angle<<" "<<"Radius = "<<rad<<endl;
    }
};
   
class cartesian{ //destination class
        float  xco, yco;
        public:
        cartesian(){
            xco=0;
            yco=0;
        }
        cartesian(polar p){ //constructor takes the bject of source class
            xco= p.return_rad()* cos(p.return_ang());
            yco = p.return_rad()* sin(p.return_ang());
        }
        void  display(){
            cout<<"xco = "<<xco<<" "<<"yco = "<<yco<<endl;
        }
    };

int main(){
    polar p(5.5, 2);
    cartesian c1;
    c1 = p;
    c1.display();
    return 0;

}
