#include <iostream>
#include <algorithm>

using namespace std;

string reverseString(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Hasil: " << reverseString(kalimat) << endl;

    return 0;
}