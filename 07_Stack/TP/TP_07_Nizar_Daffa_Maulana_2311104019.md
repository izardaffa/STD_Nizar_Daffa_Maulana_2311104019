<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 07</b>

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

- Soal TP: [Tugas-Pendahuluan-0&](/TP%20MODUL%207%20STD%20-%202425.pdf)

# Jawaban

`stack.h`

```cpp
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef char infotype;

struct stack {
    infotype info[15];
    int Top;
};

void createStack(stack &S);

bool isEmpty(stack S);

bool isFull(stack S);

void push(stack &S, infotype X);

int pop(stack &S);

void printInfo(stack S);

#endif
```

`stack.cpp`

```cpp
#include <iostream>
#include "stack.h"

using namespace std;

void createStack(stack &S) {
    S.Top = -1;
}

bool isEmpty(stack S) {
    return S.Top == -1;
}

bool isFull(stack S) {
    return S.Top == 14;
}

void push(stack &S, infotype x) {
    if (isFull(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S.Top++;
        S.info[S.Top] = x;
    }
}

int pop(stack &S) {
    if (isEmpty(S)) {
        cout << "Stack kosong!" << endl;
        return -1;
    } else {
        int x = S.info[S.Top];
        S.Top--;
        return x;
    }
}

void printInfo(stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        for (int i = S.Top; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}
```

`stack.main`

```cpp
#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    stack S;
    createStack(S);

    push(S, 'G');
    push(S, 'N');
    push(S, 'U');
    push(S, 'D');
    push(S, 'N');
    push(S, 'A');
    push(S, 'B');
    push(S, 'O');
    push(S, 'L');
    push(S, 'A');
    push(S, 'H');

    printInfo(S);

    pop(S);
    pop(S);
    pop(S);
    pop(S);
    
    printInfo(S);

    return 0;
}
```

Output:

```
H A L O B A N D U N G 
B A N D U N G
```