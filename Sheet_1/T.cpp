#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    int temp;

    cin >> A >> B >> C;

    int original[3] = {A, B, C};

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    cout << endl;


    cout << original[0] << endl;
    cout << original[1] << endl;
    cout << original[2] << endl;

    return 0;
}