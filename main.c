// Program	: Linked List UTS
// Author	: Naufal Rajabi
// NIM		: 1815124025
// Tanggal	: 11/03/19

#include "linkedlistMahasiswa.h"
#include <stdio.h>

int main(){
	printf("Daftar ekskul yang bisa dipilih ...\n\n");
	
	//list ekskul yang tersedia
	struct linkedlistEkskul listEkskul;
	init(&listEkskul);
	
	addFirst(&listEkskul, "Basket");
	addLast(&listEkskul, "Angklung");
	addLast(&listEkskul, "Karate");
	addLast(&listEkskul, "Science");
	addLast(&listEkskul, "Futsal");
	addLast(&listEkskul, "Catur");
	printLinkedList(listEkskul);
	
	//membuat list pilihan mahasiswa dan digabung jadi node di linked
	//list mahasiswa
	
	//list ekskul Mira
	struct linkedlistEkskul listEkskulMira;
	init(&listEkskulMira);
	addFirst(&listEkskulMira, "Basket");
	addLast(&listEkskulMira, "Catur");
	addLast(&listEkskulMira, "Karate");
	
	//list ekskul Nani
	struct linkedlistEkskul listEkskulNani;
	init(&listEkskulNani);
	addFirst(&listEkskulNani, "Angklung");
	addLast(&listEkskulNani, "Catur");
	
	//list ekskul Ahmad
	struct linkedlistEkskul listEkskulAhmad;
	init(&listEkskulAhmad);
	
	//list ekskul Budi
	struct linkedlistEkskul listEkskulBudi;
	init(&listEkskulBudi);
	
	//list ekskul Naufal
	struct linkedlistEkskul listEkskulNaufal;
	init(&listEkskulNaufal);
	addFirst(&listEkskulNaufal, "Science");
	addLast(&listEkskulNaufal, "Karate");
	
	//list mahasiswa dan pilihan ekskulnya
	struct linkedlistMahasiswa listMahasiswa;
	initMahasiswa (&listMahasiswa);
	
	addFirstMahasiswa(&listMahasiswa, &listEkskulMira, "Mira");
	addLastMahasiswa(&listMahasiswa, &listEkskulNani, "Nani");
	addLastMahasiswa(&listMahasiswa, &listEkskulAhmad, "Ahmad");
	addLastMahasiswa(&listMahasiswa, &listEkskulBudi, "Budi");
	addLastMahasiswa(&listMahasiswa, &listEkskulNaufal, "Naufal");
	
	//menampilkan list mahasiswa (poin 1a soal UTS)
	printLinkedListMahasiswa(listMahasiswa);
	return 0;
}

/**
Dikarenakan waktu yang kurang saya baru sempat mengerjakan no 1a saja
Algortima untuk nomor satu b saya coretkan di kertas
*/
