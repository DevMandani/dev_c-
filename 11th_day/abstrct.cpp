#include<iostream>

using namespace std;

class Main{
  
    public:
       virtual void signup()=0;

       virtual void login()=0;


       void calling(){
        cout<<"calling this funcation...!"<<endl;
       }

};


class Sub : public Main{

    public:

    void signup(){

            cout<<"you are signing...!"<<endl;

    }

    void login(){

        cout<<"you are login....!"<<endl;
    }
};


int main(){


    Sub obj;
obj.calling();
    obj.signup();
    obj.login();
    

    return 0;
}