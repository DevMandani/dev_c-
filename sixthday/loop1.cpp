#include<iostream>

using namespace std;

int main(){


    for(int i=0;i<5;i++){

        for(int k=0;k<=5;k++){
          cout<<"  ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}