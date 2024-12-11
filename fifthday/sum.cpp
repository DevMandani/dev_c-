#include<iostream>

using namespace std;

int main(){

    int r,c;

    cout<<" row:";
    cin>>r;
    cout<<" column";
    cin>>c;

    int array[r][c];
    int sum=0;

    
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


        for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
         
            sum=sum+array[i][j];
                
        }cout<<endl;

    }
        cout<<sum;


}