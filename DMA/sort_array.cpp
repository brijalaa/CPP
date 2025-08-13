#include<iostream>
using namespace std;

int main(){
    int i,j,n, temp;
    cout<<"Enter the no elements in Array:";
    cin>>n;
    int *ptr= new int[n];
    cout<<"Enter integers in array:";
    for(i=0;i<=n-1;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<=n;j++){
            if(ptr[j]<ptr[i]){
                temp= ptr[j];
                ptr[j]=ptr[i];
                ptr[i]=temp;
            }
        }
    }

    cout<<"Sorted array:"<<endl;
    for(i=0;i<=n-1;i++){
        cout<<ptr[i]<<" ";
    }
    delete[] ptr; 
    return 0;
}