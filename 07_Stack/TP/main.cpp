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