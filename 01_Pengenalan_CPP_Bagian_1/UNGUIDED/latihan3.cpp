#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Masukkan sebuah angka: ";
    cin >> num;

    int l = 0;
    for (int i = num; i >= 0; i--) {
        for (int k = 0; k < l; k++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << "*";

        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        cout << endl;
        l++;
    }

    return 0;
}