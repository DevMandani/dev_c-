#include<iostream>
#include<string.h>




using namespace std;

class mov{
    public:
    char name[100];

    int price;
};

int main(){
    mov movie;
    mov movie2;
    strcpy(movie.name,"pushpa2");
    movie.price=100;

    strcpy(movie2.name,"kgf 2");
    movie.price=400;


 cout << "name: " <<  movie.name << endl;
     cout << "price: " <<  movie.price << endl;
     
 cout << "name: " <<  movie2.name << endl;
     cout << "price: " <<  movie2.price << endl;
    return 0;
}