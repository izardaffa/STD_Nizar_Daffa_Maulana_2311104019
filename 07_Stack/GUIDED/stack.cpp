#include <iostream>

using namespace std;

string arrayBuku[5];
int top = 0, full = 5;

bool isFull() {
    return top == full;
}

bool isEmpty() {
    return top == 0;
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data penuh!" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Data kosong!" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Data kosong!" << endl;
    } else {
        int index = top - posisi;
        if (index >= 0 && index < top) {
            cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
        } else {
            cout << "Posisi di luar jangkauan" << endl;
        }
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    int index = top - posisi;
    if (index >= 0 && index < top) {
        arrayBuku[index] = data;
    } else {
        cout << "Posisi melebihi array yang ada" << endl;
    }
}

void destroyArrayBuku() {
    for (int i = top - 1; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        cout << "Cetak Array Buku: " << endl;
        for (int i = top - 1; i >= 0; i--) {
            cout << "- " << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Bahasa Inggris");
    pushArrayBuku("Bahasa Indonesia");

    cetakArrayBuku();

    cout << "Apakah data stak penuh? " << (isFull() ? "Ya" : "Tidak") << endl;
    cout << "Apakah data stak kosong? " << (isEmpty() ? "Ya" : "Tidak") << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jepang");
    cetakArrayBuku();

    destroyArrayBuku();
    cout << "Top setelah destroy : " << top << endl;
    cetakArrayBuku();

    return 0;
}