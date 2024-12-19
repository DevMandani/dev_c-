#include<iostream>

using namespace std;

class animal{

        public:
        void eat(){
            cout<<"Eating";
        }
};

class cat : public animal{

    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};


int main(){

 cat c1;
 c1.meow();

    return 0;
}