#include<iostream>

using namespace std;

int main(){

    int r,c;

    cout<<" row:";
    cin>>r;
    cout<<" column";
    cin>>c;

    int array[r][c];


//   for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){

//            cout<<a[i][j];
//         }
//         cout<<endl;
//     }

    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
         
            cin >> array[i][j];
        }
    }

        for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
         
            cout << array[i][j];
        }cout<<endl;
    }


}