#include<iostream>

#include<vector>


using namespace std;



int main(){


    vector<int> arr = {4,6,8,2,3,5};


        stable_sort(arr.begin(),arr.end());

        for(int ele :arr)
        {
            cout<<ele;
        }

    return 0;
}