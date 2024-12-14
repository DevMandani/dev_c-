#include<iostream>


using namespace std;


void sum(int a,int b){

    cout<<"sum is:"<<a+b<<endl;

}

void avg(int a,int b){
    cout<<"avg is:"<<a/b;
}

int main(){

    int a=10;
    int b=10;

    sum(a,b);
    avg(a,b);
}