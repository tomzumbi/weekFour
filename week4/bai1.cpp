#include <iostream>

using namespace std;

int main() {
    int number, total;
    cout << "\tEnter the number: ";
    cin >> number;
    while (number < 0) {
        cout << "\tRe-Enter the number: ";
        cin >> number;
    }

    for (int i = 0; i <= number; ++i) {
        total = total + i;
    }

    cout << "\tTotal: " << total << endl;
    return 0;
}