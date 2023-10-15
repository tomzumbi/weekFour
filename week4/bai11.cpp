#include <iostream>
#include <string>
using namespace std;

int main() {
    const int minStudents = 1;
    const int maxStudents = 25;

    int numStudents;


    while (true) {
        cout << "Students: ";
        cin >> numStudents;

        if (numStudents >= minStudents && numStudents <= maxStudents) {
            break;
        } else {
            cout << "Not valid.\n";
        }
    }


    string firstName, lastName;
    string firstStudent, lastStudent;

    for (int i = 0; i < numStudents; i++) {
        cout << "Student's name: " << i + 1 << ": ";
        cin >> firstName >> lastName;

        if (i == 0) {
            firstStudent = firstName + " " + lastName;
            lastStudent = firstName + " " + lastName;
        } else {
            if (firstName < firstStudent) {
                firstStudent = firstName + " " + lastName;
            } else if (firstName > lastStudent) {
                lastStudent = firstName + " " + lastName;
            }
        }
    }

    // Báo cáo học sinh ở đầu hàng và học sinh ở cuối hàng
    cout << "First Student: " << firstStudent << endl;
    cout << "Last Student: " << lastStudent << endl;

    return 0;
}