#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;

    cout << "Masukkan sebuah kata : ";
    cin >> str;

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    cout << "Kata tersebut ";
    if (str != reversedStr) {
        cout << "bukan ";
    }
    cout << "polindrom" << endl;

    return 0;
}