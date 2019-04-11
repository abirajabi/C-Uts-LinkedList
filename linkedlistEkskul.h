#ifndef linkedlistEkskul_h
#define linkedlistEkskul_h

struct nodeEkskul {
    //variabel penampung data
    char namaEkskul[30];
    struct nodeEkskul *next;
};

struct linkedlistEkskul {
    struct nodeEkskul *head;
    struct nodeEkskul *tail;
    int size;
};

void init(struct linkedlistEkskul *ll);
void addFirst(struct linkedlistEkskul *ll, char namaEkskul[30]);
int isEmpty (struct linkedlistEkskul ll); 
char* getFirst(struct linkedlistEkskul ll);
void removeFirst(struct linkedlistEkskul *ll);
void addLast(struct linkedlistEkskul *ll, char namaEkskul[30]);
char* getLast (struct linkedlistEkskul ll);
void removeLast (struct linkedlistEkskul *ll);
int getSize (struct linkedlistEkskul ll);
void printLinkedList (struct linkedlistEkskul ll);

#endif
