#include <iostream>
using namespace std;

// Lab 6 - Noe Zuniga
// CIS 5 Week 06 - Even and odd

int main() {

    int evenSum = 0;

    for (int i = 0; i <= 100; i = i + 2) {
        evenSum = evenSum + i;
    }

    cout << "Sum of even numbers from 0 to 100: "
         << evenSum << endl;

    int oddSum = 0;
    int i = 1;

    while (i <= 99) {
        oddSum = oddSum + i;
        i = i + 2;
    }

    cout << "Sum of odd numbers from 1 to 99: "
         << oddSum << endl;

    return 0;
}
