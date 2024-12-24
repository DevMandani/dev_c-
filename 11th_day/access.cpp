#include<iostream>

using namespace std;

class A{
    private:

    int x=12;
    int y=13;
    int z=14;

};

class B: private B{
        public:

        void call(){
            cout<<A::x<<endl;

            cout<<A::y<<endl;

            cout<<a::z<<endl;

        }
};

int main(){


B obj;
obj.call();

    return 0;
}