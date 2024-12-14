#include<iostream>
#include<string.h>
using namespace std;


int main(){

int k=11;
for(int i=0; i<4; i++){
    for(int j=0; j<=i; j++){
        cout << k <<  " ";
        k++;
    }
    cout << endl;
}
    return 0;
}