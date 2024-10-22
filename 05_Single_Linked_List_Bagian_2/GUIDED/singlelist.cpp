#include <iostream>

using namespace std;

struct Element {
    int data;
    Element *next;
};

struct List {
    Element *first;
};

void createList(List &L) {
    L.first = NULL;
}

Element *alokasi(int x) {
    Element *P = new Element;
    if (P != NULL) {
        P->data = x;
        P->next = NULL;
    }
    return P;
}

void insertFirst(List &L, Element *P) {
    P->next = L.first;
    L.first = P;
}

void printInfo(List L) {
    Element* P = L.first;
    while (P != NULL) {
        cout << P->data << " ";
        P = P->next;
    }
    cout << endl;
}

Element* findElm(List L, int x) {
    Element* P = L.first;
    while (P != NULL) {
        if (P->data == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

int sumAllElements(List L) {
    int total = 0;
    Element* P = L.first;
    while (P != NULL) {
        total += P->data;
        P = P->next;
    }
    return total;
}