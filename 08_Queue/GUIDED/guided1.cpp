#include <iostream>

using namespace std;

const int maximumQueue = 5;
int front = 0, back = 0;
string queueTeller[5];

bool isFull() {
    if (back == maximumQueue) {
        return true; // -1
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueue(string data) {
    if (isFull()) {
        cout << "Antrian penuh!" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        for (int i = 0; i < back - 1; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }

        queueTeller[back - 1] = "";
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        front = 0;
        back = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;

    for (int i = 0; i < maximumQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueue("Andi");
    enqueue("Maya");
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