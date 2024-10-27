#include <iostream>

using namespace std;

struct Buku {
    int id;
    string judul;
    string penulis;
};

struct Node {
    Buku data;
    Node* next;
    Node* prev;
};

void insertLast(Node *&head, Node *&tail, Buku data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;
    new_node->prev = nullptr;

    if (head == nullptr) {
        head = new_node;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
        tail = new_node;
    }
}

void printAsc(Node *head) {
    if (head == nullptr) {
        cout << "Daftar Buku Kosong!" << endl;
    } else {
        Node *current = head;

        cout << "Daftar Buku (ASC):" << endl;
        while (current != nullptr) {
            cout << "ID : " << current->data.id << " | Judul : " << current->data.judul << " | Penulis : " << current->data.penulis << endl;
            current = current->next;
        }
        cout << endl;
    }
}

void printDesc(Node *tail) {
    if (tail == nullptr) {
        cout << "Daftar Buku Kosong!" << endl;
    } else {
        Node *current = tail;

        cout << "Daftar Buku (DESC):" << endl;
        while (current != nullptr) {
            cout << "ID : " << current->data.id << " | Judul : " << current->data.judul << " | Penulis : " << current->data.penulis << endl;
            current = current->prev;
        }
        cout << endl;
    }
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;

    Buku buku1;
    buku1.id = 1;
    buku1.judul = "Attack On Titan";
    buku1.penulis = "Hajime Isayama";
    insertLast(head, tail, buku1);

    Buku buku2;
    buku2.id = 2;
    buku2.judul = "One Punch Man";
    buku2.penulis = "Murata & ONE";
    insertLast(head, tail, buku2);

    Buku buku3;
    buku3.id = 3;
    buku3.judul = "Lord of the Rings";
    buku3.penulis = "JRR Tolkien";
    insertLast(head, tail, buku3);

    printAsc(head);
    printDesc(tail);

    return 0;
}