#include<iostream>
using namespace std;

int main(){
   
    int *px = new int;
    int *py = new int;
    int *psum = new int;
    cout<<"Enter any two numbers: "<<endl;
    cin>>*px>>*py;
    *psum= *px+*py;
    cout<<"sum is="<<" "<<*psum<<endl;
    delete px;
    delete py;
    delete psum;
}