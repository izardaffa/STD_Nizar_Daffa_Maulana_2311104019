<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 04</b>

<img src="../../logo-TU.webp" alt="Logo TelU" width="400">

<br><br>

Nama: 

Nizar Daffa Maulana (2311104019)

Dosen: 

Yudha Islami Sulistya, S.Kom., M.Kom.

<br><br>

**PROGRAM STUDI S1 REKAYASA PERANGKAT LUNAK**

**FAKULTAS INFORMATIKA**

**TELKOM UNIVERSITY PURWOKERTO**

**2024**

</div>

# Soal

- Soal TP: [Tugas-Pendahuluan-04](/TP%20MODUL%204%20STD%20-%202425.pdf)

# Jawaban

list.h
```cpp
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);

address allocate(infotype x);

void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address P, address Prec);

void deleteFirst(List &L);
void deleteLast(List &L);
void deleteAfter(List &L, address Prec);

void printInfo(List L);

int searchInfo(List &L, int P);
```

list.cpp
```cpp
#include <iostream>
#include "list.h"

using namespace std;

void createList(List &L) {
    first(L) = NULL;
}

address allocate(infotype x) {
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P) {
    if (first(L) == NULL) {
        insertFirst(L, P);
    } else {
        address Q = first(L);

        while (next(Q) != NULL) {
            Q = next(Q);
        }

        next(Q) = P;
    }
}

void insertAfter(List &L, address P, int Q) {
    address Prec = first(L);

    while ((next(Prec) != NULL) && (info(Prec) != Q)) {
        Prec = next(Prec);
    }

    if (next(Prec) != NULL) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List &L) {
    address P = first(L);
    first(L) = next(P);
    next(P) = NULL;
}

void deleteLast(List &L) {
    address Q = first(L);
    
    while (next(next(Q)) != NULL) {
        Q = next(Q);
    }

    address P = next(Q);
    next(Q) = NULL;
}

void deleteAfter(List &L, int Q) {
    address Prec = first(L);

    while ((next(Prec) != NULL) && (info(Prec) != Q)) {
        Prec = next(Prec);
    }

    address P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
    delete P;
}

void printInfo(List L) {
    address p = first(L);

    cout << "Isi list : ";

    while (p != NULL) {
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}

int searchInfo(List &L, int P) {
    address Q = first(L);
    address temp = NULL;

    while (Q != NULL) {
        if (info(Q) == P) {
            if (temp == NULL) {
                cout << "Nilai " << P << " ditemukan pada urutan pertama" << endl;
            } else {
                cout << "Nilai " << P << " ditemukan setelah nilai " << info(temp) << endl;
            }
            return true;
        }
        temp = Q;
        Q = next(Q);
    }

    cout << "Nilai " << P << " tidak ditemukan" << endl;
    return false;
}
```

main.cpp

```cpp
#include <iostream>
#include "list.cpp"

using namespace std;

int main() {
    List head;

    createList(head);

    cout << "Masukkan NIM perdigit" << endl;

    for (int i = 0; i < 10; i++) {
        int number;

        cout << "Digit " << i+1 << " : ";
        cin >> number;

        address elm = allocate(number);

        insertLast(head, elm);
    }

    printInfo(head);

    return 0;
}
```

Output:
```
Masukkan NIM perdigit
Digit 1 : 9
Digit 2 : 1
Digit 3 : 0
Digit 4 : 4
Digit 5 : 0
Digit 6 : 1
Digit 7 : 1
Digit 8 : 1
Digit 9 : 3
Digit 10 : 2
Isi list : 9104011132
```
