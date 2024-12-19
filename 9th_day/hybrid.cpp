#include<iostream>

using namespace std;

class A{

    public:

    void top(){
        cout<<"top side A"<<endl;
    }
};


class B : public A{

    public:

        void left(){

            cout<<"left side B"<<endl;
        }
};

class C: public A{

    public:

    void right(){

        cout<<"right side is C"<<endl;
    }
};

class D : public B,public C{


    public:

    void bottom(){

        cout<<"bottom is D"<<endl;
    }
};



int main(){


    A a1;
    B b1;
    C c1;


    a1.top();

    b1.left();

    c1.right();


    cout<<"print D";

    D d1;

     d1.C::top();

    return 0;
}