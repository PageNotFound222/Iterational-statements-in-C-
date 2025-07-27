#include <iostream>
using namespace std;
int main() {
    int PRN, reversed = 0;
    cout << "Enter your PRN: ";
    cin >> PRN;
    while (num != 0) {
        int digit = num % 10;           
        reversed = reversed * 10 + digit; 
        num = num / 10;                  
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
/*
Output:
Enter your PRN: 123
321
*/
