
#include <iostream>
using namespace std;

int stringLength(const char* str) {

    const char* ptr = str;
    int length = 0;
    

    while (*ptr != '\0') {
        length++;
        ptr++;  
    }
    
    return length;
}

int main() {
    const char* myString = "Hello, World!";
    int len = stringLength(myString);
    cout << "The length of the string is: " << len << endl;
    
    return 0;
}