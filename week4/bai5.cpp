#include <iostream>
using namespace std;

int main() {
    double membershipFee = 2500; // Phí thành viên hàng năm (đô la)
    double feeIncreaseRate = 0.04; // Tỷ lệ tăng phí hàng năm

    cout << "Yeah\tMembership fee ($)" << endl;
    for (int i = 1; i <= 6; i++) {
        membershipFee += membershipFee * feeIncreaseRate;
        cout << i << "\t" << membershipFee << endl;
    }

    return 0;
}