#include <iostream>
using namespace std;

const int numStores = 5;
const int scale = 100;

int main() {
    int sales[numStores];

    // Nhập doanh số bán hàng của 5 cửa hàng
    for (int i = 0; i < numStores; i++) {
        cout << "Enter store sales " << i + 1 << ": ";
        cin >> sales[i];
    }

    // Hiển thị biểu đồ dạng thanh so sánh
        for (int i = 0; i < numStores; i++) {
        cout << "Store " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / scale; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}