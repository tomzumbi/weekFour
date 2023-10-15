#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int numYears = 6;
const int scale = 1000;

int main() {
    string filename = "People.txt";
    ifstream inputFile(filename);

    if (!inputFile) {
        cout << "Can not open file! " << filename << endl;
    }

    int population[numYears];
    string years[] = {"1900", "1920", "1940", "1960", "1980", "2000"};


    for (int i = 0; i < numYears; i++) {
        inputFile >> population[i];
    }

    inputFile.close();

    for (int i = 0; i < numYears; i++) {
        cout << years[i] << ": ";
        for (int j = 0; j < population[i] / scale; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}