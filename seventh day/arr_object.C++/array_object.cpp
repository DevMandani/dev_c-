#include<iostream>
#include<string.h>
using namespace std;



class Courses{
    
    public:
    char name[100];
    int duration;
    char lang[100];


    void setData( char name[],int duration,char lang[]){
     strcpy(this->name,name);
    this->duration=duration;
    strcpy(this->lang,lang);
    }

    void getData(){
        cout<<name<<" "<< duration<<" "<<lang;
    }
};


int main(){

    Courses c1,c2;
    Courses *c3;
    
    c1.setData("Mern", 12, "Javascript");
    c1.getData();
    c2.setData("Android", 9, "OOP");
 
    c2.getData();

    c3.getaddress();


    return 0;
}