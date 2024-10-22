#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

void insertFirst(int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }

    // cout << "Tambah node di depan (nilai: " << data << ")" << endl;
}

void insertLast(int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
    // cout << "Tambah node di belakang (nilai: " << data << ")" << endl;
}

void printList() {
    Node *current = head;

    // cout << "Cetak linked list:" << endl;

    if (head != nullptr) {
        while (current != nullptr) {
            cout << current->data;

            if (current->next != nullptr) {
                cout << " -> ";
            }

            current = current->next;
        }
    } else {
        cout << "List kosong!";
    }

    cout << endl;
}

void findNode(int data) {
    Node *current = head;

    // cout << "Cari node dengan nilai " << data << endl;

    if (head != nullptr) {
        while (current != nullptr) {
            if (current->data == data) {
                cout << "Node dengan nilai " << data << " ditemukan." << endl;
                return;
            }

            current = current->next;
        }

        cout << "Node dengan nilai " << data << " tidak ditemukan." << endl;
    } else {
        cout << "List kosong!" << endl;
    }
}

void lengthList() {
    Node *current = head;
    int length = 0;

    if (head != nullptr) {
        while (current != nullptr) {
            length++;
            current = current->next;
        }

        cout << "Panjang linked list: " << length;
    } else {
        cout << "List kosong!";
    }

    cout << endl;
}

int main() {
    head = nullptr;
    tail = nullptr;

    insertFirst(10);
    insertLast(20);
    insertFirst(5);
    findNode(20);
    lengthList();

    return 0;
}
