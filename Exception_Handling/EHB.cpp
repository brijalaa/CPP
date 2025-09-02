#include<iostream>
using namespace std;

void calculate(){
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    if(b==0){
        throw b;
    }
    else{
        cout<<"The quoitent = "<<a/b<<endl;
    }
}
int main(){
    try{
        calculate();
    }
    catch(int a){
        cout<<"Divison by 0 gives Indetermined form"<<endl;
    }
    cout<<"END";
    return 0;
}