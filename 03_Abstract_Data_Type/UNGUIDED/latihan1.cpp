#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float nilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

void inputNilai(Mahasiswa &mhs) {
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mhs.nama);
    
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    
    cout << "Masukkan nilai UTS: ";
    cin >> mhs.uts;
    
    cout << "Masukkan nilai UAS: ";
    cin >> mhs.uas;
    
    cout << "Masukkan nilai tugas: ";
    cin >> mhs.tugas;
    
    mhs.nilaiAkhir = nilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}

int main() {


    return 0;
}