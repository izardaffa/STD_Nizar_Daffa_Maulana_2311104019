#include <iostream>
#include <string>

using namespace std;

const int MAX = 10;

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
    // cin >> mhs.nama;
    
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
    Mahasiswa mahasiswa[MAX];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa = ";
    cin >> jumlahMahasiswa;

    for(int i = 0; i < jumlahMahasiswa; i++) {
        if(i > MAX) {
            cout << "Jumlah mahasiswa sudah mencapai batas maksimal." << endl;
            break;
        }

        inputNilai(mahasiswa[i]);
        cout << endl;
    }

    for(int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << ", NIM: " << mahasiswa[i].nim << ", Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
    }

    return 0;
}