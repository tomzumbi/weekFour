
#include <iostream>
using namespace std;

int main() {
    double seaLevelRise = 1.5;
    double currentSeaLevel = 0.0;

    cout << "Year\tCurrent Sea Level (milimet)" << endl;
    for (int i = 1; i <= 25; i++) {
        currentSeaLevel += seaLevelRise;
        cout << i << "\t" << currentSeaLevel << endl;
    }

    return 0;
}