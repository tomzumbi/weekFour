#include <iostream>

using namespace std;
int main (){
    double distance,speed,time;
    cout << "\t\nEnter the speed: ";
    cin >> speed;
    while (speed < 0){
        cout << "\t\nRe-Enter the speed: ";
        cin >> speed;
    }
    cout << "\t\nEnter the time: ";
    cin >> time;

    while (time < 0){
        cout << "\t\nRe-Enter the time: ";
        cin >> time;
    }
    if (time == 0){
        cout << "Distance: 0";
    }
    cout << "Time\tDistance\n";
    for (int i = 1; i <= time ; ++i) {
        distance = speed * i;
        cout << i << "\t " << distance << endl;
    }

    return 0;
}