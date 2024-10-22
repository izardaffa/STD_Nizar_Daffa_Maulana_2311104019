#include <iostream>

using namespace std;

#define Nil NULL;
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

bool ListEmpty(List L) {
    return first(L) == Nil;
}

void CreateList(List &L) {
    L.first = Nil;
}