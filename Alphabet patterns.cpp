#include <iostream>
using namespace std;

int main() {
    char ch = 'A';  
    for (int i = 1; i <= 5; i++) {
        // Inner loop for characters in each row
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++; 
        }
        cout << endl;  
    }

    return 0;
}

/*output:
A 
B C 
D E F 
G H I J 
K L M N O 
*/
