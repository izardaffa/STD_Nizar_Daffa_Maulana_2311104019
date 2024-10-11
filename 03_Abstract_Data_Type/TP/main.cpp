#include <iostream>
#include "kerucut.cpp"

using namespace std;

int main() {
    Kerucut kerucut;

    kerucut.jariJari = 3;
    kerucut.tinggi = 8;

    cout << "Jari-jari kerucut = " << kerucut.jariJari << endl;
    cout << "Tinggi kerucut = " << kerucut.tinggi << endl;
    cout << "Volume kerucut = " << volumeKerucut(kerucut) << endl;
    cout << "Luas Permukaan kerucut = " << luasPermukaanKerucut(kerucut) << endl;
    
    return 0;
}