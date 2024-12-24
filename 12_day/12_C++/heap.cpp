#include<iostream>

using namespace std;


int main(){


    int *a=new int (9);

    cout<<*a<<endl;
    cout<<a<<endl;

    delete a;


    return 0;
}