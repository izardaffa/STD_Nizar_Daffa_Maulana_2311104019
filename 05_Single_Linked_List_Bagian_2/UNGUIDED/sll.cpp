#include <iostream>

using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
};

struct Node {
    Mahasiswa data;
    Node *next;
};

void insertMahasiswa(Node *&head, Mahasiswa data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void findMahasiswa(Node *head, int nim) {
    if (head == nullptr) {
        cout << "Daftar Mahasiswa Kosong!" << endl;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            if (current->data.nim == nim) {
                cout << "Mahasiswa dengan NIM (" << nim << " - " << current->data.nama << ") ditemukan." << endl;
                return;
            }
            current = current->next;
        }
        cout << "Mahasiswa dengan NIM (" << nim << ") tidak ditemukan." << endl;
    }
}

void printMahasiswa(Node *head) {
    if (head == nullptr) {
        cout << "Daftar Mahasiswa Kosong!" << endl;
    } else {
        Node *current = head;
        while (current != nullptr) {
            cout << "Nama : " << current->data.nama << " | NIM : " << current->data.nim << endl;
            current = current->next;
        }
    }
}

int main() {
    Node *head = nullptr;

    Mahasiswa m1;
    m1.nama = "Nizar";
    m1.nim = 123456;

    insertMahasiswa(head, m1);

    Mahasiswa m2;
    m2.nama = "Alex";
    m2.nim = 789012;

    insertMahasiswa(head, m2);

    Mahasiswa m3;
    m3.nama = "Nova";
    m3.nim = 345678;

    insertMahasiswa(head, m3);

    findMahasiswa(head, 123456);
    findMahasiswa(head, 177103);

    return 0;
}