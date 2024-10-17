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

void printInfo(List L);
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

void printInfo(List L) {
    address p = first(L);
    while (p != NULL) {
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
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

    for (int i = 0; i < 3; i++) {
        int number;

        cout << "Masukkan angka ke-" << i+1 << " : ";
        cin >> number;

        address elm = allocate(number);

        insertFirst(head, elm);
    }

    printInfo(head);

    return 0;
}
```

Output:
```
Masukkan angka ke-1 : 4019
Masukkan angka ke-2 : 110
Masukkan angka ke-3 : 231
231, 110, 4019,
```
