
#include <iostream>

using namespace std;

int main() {
    double calo;
    for (int i = 5; i <= 30; i = i + 5) {
        calo = 3.6 * i;
        cout << "Minutes: " << i << ": " << calo << " calo" << endl;
    }
    return 0;
}