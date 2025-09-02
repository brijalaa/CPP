#include<iostream>
using namespace std;

template<class T1, class T2>
void calculate(T1 a[],int size,T2 &avg , T2 & sum){
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    avg=sum/size;
}

int main(){
    int a[]={1,3,4,2,5,6,7,8,9};
    float avg =0.0 , sum=0.0;
    calculate(a,9,avg,sum);
    cout<<"Sum= "<<sum<<endl;
    cout<<"Average= "<<avg<<endl;
    return 0;
}