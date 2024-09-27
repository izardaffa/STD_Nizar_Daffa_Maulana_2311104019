#include <iostream>

using namespace std;

int main() {
    string angka[] = {"Nol", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};

    int num;
    string numStr;

    cout << "Masukkan bilangan bulat 0-100 : ";
    cin >> num;

    if (num == 10) {
        numStr = "Sepuluh";
    } else if (num == 11) {
        numStr = "Sebelas";
    } else if (num == 100) {
        numStr = "Seratus";
    }

    if (numStr == "") {
        if (num < 10) {
            numStr = angka[num];
        } else if ((num > 10) && (num < 20)) {
            numStr = angka[num % 10].append(" Belas");
        } else if ((num > 19) && ((num % 10) == 0)) {
            numStr = angka[num / 10].append(" Puluh ");
        } else if ((num > 19) && ((num % 10) != 0)) {
            numStr = angka[num / 10].append(" Puluh ");
            numStr = numStr.append(angka[num - (num / 10 * 10)]);
        }
    }

    cout << num << " : " << numStr << endl;
}