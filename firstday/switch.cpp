#include<iostream>

using namespace std;

int main(){

    int b,choice;



    cout<<"press 1 is for ordered pizza" <<endl;
    cout<<"press 2 is for ordered burger" <<endl;
    cout<<"press 3 is for ordered samosa" <<endl;
    cout<<"press 4 is for ordered Burger" <<endl;  
    
      cout<<"enter your choice:";
    cin>>b;


    switch(b){
        case 1:
        int a;
        cout<<"your ordered pizza";

        cout<<"press 1 ordered margaritta pizza"<< endl;
        cout<<"press 2 ordered double cheese pizza"<<endl;
        cout<<"press 3 ordered onion pizza"<<endl;
        cout<<"press 4 ordered corn pizza"<<endl;

        cout<<"enter choice of pizza"<<endl;
        cin>>a;

        switch(a){
            case 1:
            cout<<"you ordered margaritta pizza";
            break;
            case 2:
            cout<<"you ordered double cheese pizza"<<endl;
            break;
            case 3:
            cout<<"you ordered onion pizza"<<endl;
            break;
            case 4:
            cout<<"you ordered corn pizza"<<endl;
            break;
            default:
            cout<<"choose valid option";
        }
       

        break;

        case 2:
        cout<<"you ordered burger";
        break;
        case 3:

        int c;
        cout<<"you ordered samosa"<<endl;
        cout<<"press 1 is for chinese samosa:"<<endl;
        cout<<"press 2 is for simple samosa:"<<endl;
        cout<<"choose types of samosa";
        cin>>c;
        switch(c){
            case 1:
            cout<<"chinese samosa";
            break;
            case 2:
            cout<<"simple samosa";
            break;
            default:
            cout<<"choose valid option";
        }
        break;
        case 4:
        cout<<"you ordered Burger";
        break;
        default:
        cout<<"choose valid choice";
        

    }
}