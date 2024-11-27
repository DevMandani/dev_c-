#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cout<<"a is:";
    cin>>a;
    cout<<"b is:";
    cin>>b;
    cout<<"c is:";
    cin>>c;



        if(a > b){
            if(a > c){
                cout<<"a is greater";
            }
            else{
                cout<<"c is greater";
            }
        }
        else if(b>a){
            if(b>c){
                cout<<"b is greater";
            }
            else{
                cout<<"c is greater";
            }
        }

    return 0;
}
