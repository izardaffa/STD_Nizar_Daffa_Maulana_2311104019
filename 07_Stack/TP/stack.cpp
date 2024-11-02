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