#include <iostream>

using namespace std;
int main (){
    double numberOfDays;
    double dollar;
    cout << "Enter the number of days: ";
    cin >> numberOfDays;
    while (numberOfDays < 1){
        cout << "Re-Enter the number of days: ";
        cin >> numberOfDays;
    }
    cout << "Number of days \t Dollar" << endl;
    for (int i = 1; i <= numberOfDays; ++i) {
        dollar = i * 0.01;
        cout << i << "\t\t\t" << dollar << endl;
    }
    return 0;
}
