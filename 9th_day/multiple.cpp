#include<iostream>

using namespace std;

class engine{
    public:
     char engine_details[50]="v9";

};

class Wheels{
    public:
    char wheels_details[50]="alloy wheels";

};

class Car : public engine,public Wheels{

 public:
    void build(){
        cout<<"car is building by engine"<<" "<<this->engine_details<<"and car tyre is:"<<this->wheels_details<<endl;
    }
};

int main(){

    Car c1;
    c1.build();

    return 0;
}