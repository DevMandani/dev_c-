#include<iostream>
#include<string.h>
using namespace std;


class City
{

    public:

     static int code;

     int phone;



     static void val(){
            cout<< "city code:" << code <<endl;;
     }


};

    int City::code = 10;

int main(){


City c1, c2, c3;

c1.phone = 88490;
c2.phone = 98248;
c3.phone = 972371;


City::val();

cout << endl;

cout << c1.phone << City::code << endl;
cout << c2.phone << City::code << endl;
cout << c3.phone << City::code << endl;










    return 0;
}