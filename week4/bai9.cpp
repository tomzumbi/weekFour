#include <iostream>
using namespace std;

int main() {
    int numYears;
    const int numMonths = 12;
    double totalRainfall = 0.0;

    cout << "Years: ";
    cin >> numYears;

    while (numYears < 1) {

        cout << "Not valid!" << endl;
        cout << "Re-Enter" << endl;

        cin >> numYears;
    }

    for (int year = 1; year <= numYears; year++) {
        cout << "Năm " << year << endl;

        double yearlyRainfall = 0.0;

        for (int month = 1; month <= numMonths; month++) {
            double monthlyRainfall;

            cout << "Amount of rain " << month << ": ";
            cin >> monthlyRainfall;

            while (monthlyRainfall < 0) {
                cout << "Not valid!" << endl;
                cout << "Re-enter!" << endl;


                cin >> monthlyRainfall;
            }

            yearlyRainfall += monthlyRainfall;
        }

        totalRainfall += yearlyRainfall;
    }

    int totalMonths = numYears * numMonths;
    double averageRainfall = totalRainfall / totalMonths;

    cout << "\nTotal of years: " << totalMonths << endl;
    cout << "Total rain: " << totalRainfall << " mm" << endl;
    cout << "Rainfall " << averageRainfall << " mm" << endl;

    return 0;
}