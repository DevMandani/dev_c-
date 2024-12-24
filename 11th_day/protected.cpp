#include<iostream>

using namespace std;

class A{

    protected:
    int x=1;
    int y=2;
    int z=3;

};

class B : protected A{

    public:

    void call(){
        cout<<A::x<<endl;
        cout<<A::y<<endl;
        cout<<A::z<<endl;
    }
};




int main(){

    B obj;

    obj.call();
    obj.call();
    obj.call();

    return 0;
}