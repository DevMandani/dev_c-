#include<iostream>

using namespace std;


void second();
void third();

void first(){
    cout<<"good morning"<<endl;
    second();
}
void second(){

    cout<<"good afternoon"<<endl;
    third();
}
void third(){

    cout<<"good evening";
}


int main(){



     first();

   


    return 0;
}