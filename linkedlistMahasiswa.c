#include "linkedlistMahasiswa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initMahasiswa(struct linkedlistMahasiswa *ll){
	ll->head = NULL;
	ll->tail = NULL;
	ll->size = 0;
}

void addFirstMahasiswa(struct linkedlistMahasiswa *ll, struct linkedlistEkskul *llekskul, char namaMahasiswa[30]){
	struct nodeMahasiswa *newNodeMahasiswa = (struct nodeMahasiswa *)malloc(sizeof(struct nodeMahasiswa));
	
	if (newNodeMahasiswa == NULL){
		printf("Gagal Alokasi");
		exit(EXIT_FAILURE);
	}

	strcpy(newNodeMahasiswa->namaMahasiswa, namaMahasiswa);
	newNodeMahasiswa->next = NULL;
	newNodeMahasiswa->pilihanEkskul = llekskul;

	if (isEmptyMahasiswa(*ll)){
		ll->head = ll->tail = newNodeMahasiswa;
	}
	else{
		newNodeMahasiswa->next = ll->head;
		ll->head = newNodeMahasiswa;
	}
	ll->size++;
}

int isEmptyMahasiswa (struct linkedlistMahasiswa ll){
	return ll.size == 0;
}

//char* getFirstMahasiswa (struct linkedlistMahasiswa ll);
void removeFirstMahasiswa (struct linkedlistMahasiswa *ll){
	if (!isEmptyMahasiswa(*ll)){
		struct nodeMahasiswa *temp = ll->head;
		ll->head = ll->head->next;
		ll->size--;
		temp->next = NULL;
		free(temp);
	}
	else {
		printf("Linked list kosong ...");
		exit(EXIT_FAILURE);
	}
}

void addLastMahasiswa (struct linkedlistMahasiswa *ll, struct linkedlistEkskul *llekskul, char namaMahasiswa[30]){
	struct nodeMahasiswa *newNodeMahasiswa = (struct nodeMahasiswa *) malloc (sizeof(struct nodeMahasiswa));

	if (newNodeMahasiswa == NULL){
		printf("Gagal alokasi");
		exit(EXIT_FAILURE);
	}
	strcpy(newNodeMahasiswa->namaMahasiswa, namaMahasiswa);
	newNodeMahasiswa->pilihanEkskul = llekskul;
	newNodeMahasiswa->next = NULL;

	if (isEmptyMahasiswa(*ll)){
		ll->head = ll->tail = newNodeMahasiswa;
	}
	else {
		ll->tail->next = newNodeMahasiswa;
		ll->tail = ll->tail->next;
	}
	ll->size++;
}

//char* getLastMahasiswa (struct linkedlistMahasiswa ll);
void removeLastMahasiswa (struct linkedlistMahasiswa *ll){
	if (!isEmptyMahasiswa(*ll)){
		if (ll->size == 1){
			struct nodeMahasiswa *temp = ll->tail;
			ll->head = ll->tail = NULL;
			ll->size = 0;
			free(temp);
		}
		else {
			struct nodeMahasiswa *current = ll->head;
            while(current->next != NULL){
                current = current->next;
            }
            struct nodeMahasiswa *temp = ll->tail;
            ll->tail = current;
            ll->tail->next = NULL;
            ll->size--;
            free(temp); 
		}
	}
	else {
		printf("Linked List kosong");
	}
}

int getSizeMahasiswa (struct linkedlistMahasiswa ll){
	return ll.size;
}

void printLinkedListMahasiswa(struct linkedlistMahasiswa ll){
	printf("\nDaftar Pilihan Ekskul Mahasiswa\n\n");
	struct nodeMahasiswa *current = ll.head;
	while (current != NULL){
		printf("%s\t: ", current->namaMahasiswa);
		printLinkedList(*current->pilihanEkskul);
		if (current != ll.tail)
			printf("\n");
		current = current->next;
	}
	printf("=====================================");
}

