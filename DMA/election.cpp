//DMA for object and object array
#include<iostream>
using namespace std;

class election{
    static int count;
    char name[20], address[200];
    int citizen_no;
    public:
    void input(){
        cout<<"Enter Name, Address and Citizenship Number:"<<endl;
        cin>>name>>address>>citizen_no;
        count++;
    }
    void show(){
        cout<<name<<" "<<address<<" "<<citizen_no<<endl;
        }
    static void  totalrecords(){
        cout<<"Total records ="<<count<<endl;
    }   
};

int election::count=0;

int main(){
    char ch;
    int i, n;
    election *ptr;
    cout<<"How many voters";
    cin>>n;
    ptr = new election[n];
    for(i=0;i<n;i++){
        ptr[i].input();            }
    election::totalrecords();
    for(i=0;i<n;i++){
        ptr[i].show();
    }
    delete[] ptr;

    return 0;
}