#include "linkedlistEkskul.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init(struct linkedlistEkskul *ll){
    ll->head = NULL;
    ll->tail = NULL;
    ll->size = 0;
}

void addFirst(struct linkedlistEkskul *ll, char namaEkskul[30]){
    struct nodeEkskul *newNode = (struct nodeEkskul*) malloc (sizeof (struct nodeEkskul));

    if (newNode == NULL){
        printf("Gagal alokasi");
        exit(EXIT_FAILURE);
    }
    strcpy(newNode->namaEkskul, namaEkskul);
    //newNode->element = element;
    newNode->next = ll->head;
    ll->head = newNode;
    ll->size++;

    //if only on nodeEkskul
    if (ll->tail == NULL){
        ll->tail = ll->head;
    }
}

int isEmpty (struct linkedlistEkskul ll){
    if (ll.size == 0){
        return 1;
    }
    return 0;
}

char* getFirst(struct linkedlistEkskul ll){
    if (isEmpty(ll)){
        printf("List kosong ...");
        exit(EXIT_FAILURE);
    }
    char namaEkskul[30];
    strcpy(namaEkskul, ll.head->namaEkskul);
    return namaEkskul;
}

void removeFirst(struct linkedlistEkskul *ll){
    if (!isEmpty(*ll)){
        struct nodeEkskul *temp = ll->head;
        ll->head = ll->head->next;
        ll->size--;
        free(temp);
    }
    else {
        printf("\nList kosong\nTidak ada item yang bisa di delete");
        exit(EXIT_FAILURE);
    }
}

void addLast(struct linkedlistEkskul *ll, char namaEkskul[30]){
    struct nodeEkskul *newNode = (struct nodeEkskul *) malloc (sizeof(struct nodeEkskul));

    if (newNode == NULL){
        printf("Gagal alokasi");
        exit(EXIT_FAILURE);
    }
	strcpy(newNode->namaEkskul, namaEkskul);
    newNode->next = NULL;
    if (isEmpty (*ll)){
        ll->head = newNode;
        ll->tail = ll->head;
    }
    else {
        
        ll->tail->next = newNode;
        ll->tail = ll->tail->next;
    }
    ll->size++;
}

char* getLast (struct linkedlistEkskul ll){
    return ll.tail->namaEkskul;
}

void removeLast (struct linkedlistEkskul *ll){
    if (!isEmpty(*ll)){
        if (ll->size == 1){
            struct nodeEkskul *temp = ll->head;
            ll->head = ll->tail = NULL;
            ll->size = 0;
            free(temp);
        }
    }
}

int getSize (struct linkedlistEkskul ll){
    return ll.size;
}

void printLinkedList (struct linkedlistEkskul ll){
    printf("[");
    
    if (isEmpty(ll)){
    	printf("Tidak mengikuti ekskul sama sekali");
	}
	else {
		struct nodeEkskul *current = ll.head;
		while (current != NULL){
		    printf("%s", current->namaEkskul);
		    if (current->next != NULL)
		        printf(", ");
		    current = current->next;
		}
	}
    printf("]\n");
}


