#include<iostream>

using namespace std;

int main(){


    int size;

cout<<"enter array size:";
cin>>size;


    int a[size];
    int b[size];
    int c[size];

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    for(int i=0;i<size;i++){
        cout<<b[i]<<endl;
    }

    for(int i=0;i<size;i++){
       c[i]=a[i]+b[i];
    }
    for(int i=0;i<size;i++){
        cout<<c[i];
    }


    return 0;
}