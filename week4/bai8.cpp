#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double number1 = rand();
    double number2 = rand();
    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;
    while (true) {

        int choice;
        cout << "1. +" << endl;
        cout << "2. -" << endl;
        cout << "3. *" << endl;
        cout << "4. /" << endl;
        cout << "5. exit " << endl;
        cout << "Choose the math: " << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << number1 + number2 << endl;
                break;
            case 2:
                cout << number1 - number2 << endl;
                break;
            case 3:
                cout << number1 * number2 << endl;
                break;
            case 4:
                cout << number1 / number2 << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid" << endl;
                break;
        }


    }


    return 0;
}
