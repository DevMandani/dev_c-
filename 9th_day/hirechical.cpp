#include<iostream>

using namespace std;

class Vehical{

    public:

     char car_wheels[50]="Aluminum Wheels";
     char bike_wheels[50]="steel bar wheels";

};

class Car :public Vehical{


    public:
    void build(){
        cout<<"car is buiding with 4 tyre:"<<this->car_wheels<<endl;
    }

};

class Bike : public Vehical{
    public:
    void build(){

        cout<<"bike is building with 4 tyre:"<<this->bike_wheels<<endl;
    }
};

int main(){


Car c1;
c1.build();

Bike b1;
b1.build();


    return 0;
}