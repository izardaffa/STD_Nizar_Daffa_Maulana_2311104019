#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
};

struct Node {
    Mahasiswa data;
    Node* next;
};

Node* front = nullptr;
Node* back = nullptr;

bool isEmpty() {
    return front == nullptr;
}

void enqueue(string nama, string nim) {
    Node* newNode = new Node;
    newNode->data.nama = nama;
    newNode->data.nim = nim;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = newNode;
        back = newNode;
    } else {
        Node* temp = front;
        Node* prev = nullptr;
        while (temp != nullptr && temp->data.nim < nim) {
            prev = temp;
            temp = temp->next;
        }

        if (prev == nullptr) {
            newNode->next = front;
            front = newNode;
        } else if (temp == nullptr) {
            prev->next = newNode;
            back = newNode;
        } else {
            prev->next = newNode;
            newNode->next = temp;
        }
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

int countQueue() {
    int count = 0;
    Node* temp = front;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void viewQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        cout << "Data antrian mahasiswa: " << endl;
        Node* temp = front;
        int nomor = 1;
        while (temp != nullptr) {
            cout << nomor << ". Nama: " << temp->data.nama << ", NIM: " << temp->data.nim << endl;
            temp = temp->next;
            nomor++;
        }
    }
}

int main() {
    enqueue("Andi", "20210101");
    enqueue("Alia", "20210002");
    enqueue("Nia", "20210110");
    enqueue("Lumi", "20209999");

    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    dequeue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    return 0;
}