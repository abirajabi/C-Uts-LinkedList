#ifndef linkedlistMahasiswa_h
#define linkedlistMahasiswa_h
#include "linkedlistEkskul.h"

struct nodeMahasiswa {
    //variabel penampung data
    char namaMahasiswa[30];
    struct nodeMahasiswa *next;
    struct linkedlistEkskul *pilihanEkskul;
};

struct linkedlistMahasiswa {
    struct nodeMahasiswa *head;
    struct nodeMahasiswa *tail;
    int size;
};

void initMahasiswa(struct linkedlistMahasiswa *ll);
void addFirstMahasiswa(struct linkedlistMahasiswa *ll, struct linkedlistEkskul *llekskul, char namaMahasiswa[30]);
int isEmptyMahasiswa (struct linkedlistMahasiswa ll); 
//char* getFirstMahasiswa (struct linkedlistMahasiswa ll);
void removeFirstMahasiswa (struct linkedlistMahasiswa *ll);
void addLastMahasiswa (struct linkedlistMahasiswa *ll, struct linkedlistEkskul *llekskul, char namaMahasiswa[30]);
//char* getLastMahasiswa (struct linkedlistMahasiswa ll);
void removeLastMahasiswa (struct linkedlistMahasiswa *ll);
int getSizeMahasiswa (struct linkedlistMahasiswa ll);
void printLinkedListMahasiswa(struct linkedlistMahasiswa ll);

/*
Prototype 1b

*/

#endif
