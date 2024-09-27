#include <iostream>

using namespace std;

int main() {
    float num1, num2;

    cout << "Masukkan bilangan pertama: ";
    cin >> num1;

    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    cout << endl;
    cout << "Hasil penjumlahan " << num1 << " dan " << num2 << ": " << num1 + num2 << endl;
    cout << "Hasil pengurangan " << num1 << " dan " << num2 << ": " << num1 - num2 << endl;
    cout << "Hasil perkalian " << num1 << " dan " << num2 << ": " << num1 * num2 << endl;
    cout << "Hasil pembagian " << num1 << " dan " << num2 << ": " << num1 / num2 << endl;

    return 0;
}