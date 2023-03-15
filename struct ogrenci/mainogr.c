// ögrencinin kisisel bilgilerini(ad,  soyad,  no,  ...)ve  adresbilgilerini  depolayanstruct tanimlayiniz ve bu yapiyi kullanarak ekranda gösteren kod
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct yapisi olusturulur
struct Ogrenciler {
	char* ogrAdi;
	int ogrnum;
	int ogrYasi;
	double ogrPuan;
};

int main()
{
	//istenen ogrenci sayisi 'n' degerine esittir 
	int i = 0, n = 5;

	/* ogrenici bilgilerini depolayan struct ogrenci dizisi tanimlama ve verilerin girisi*/
	
	struct Ogrenciler ogrenci[n];
//ogrenci bilgileri kaydetme
	ogrenci[0].ogrnum = 02;
	ogrenci[0].ogrAdi = "Melek";
	ogrenci[0].ogrYasi = 19;
	ogrenci[0].ogrPuan = 90.50;

	ogrenci[1].ogrnum = 46;
	ogrenci[1].ogrAdi = "Mert";
	ogrenci[1].ogrYasi = 21;
	ogrenci[1].ogrPuan = 98.70;

	ogrenci[2].ogrnum = 27;
	ogrenci[2].ogrAdi = "Yagmur";
	ogrenci[2].ogrYasi = 18;
	ogrenci[2].ogrPuan = 87.91;

	ogrenci[3].ogrnum = 44;
	ogrenci[3].ogrAdi = "Esra";
	ogrenci[3].ogrYasi= 20;
	ogrenci[3].ogrPuan = 90.20;

	ogrenci[4].ogrnum = 31;
	ogrenci[4].ogrAdi = "Deniz";
	ogrenci[4].ogrYasi = 20;
	ogrenci[4].ogrPuan = 78.15;

	// Ogrenci bilgilerini yazdiran kod asamasi
	printf("Ögrenci Bilgileri:\n\n");
	for (i = 0; i < n; i++) {
		printf("\tÖgrenci ismi = %s\n", ogrenci[i].ogrAdi); //ogrencinin adi ekrana yazdirilir
		printf("\tÖgrenci Numarasi = %d\n", ogrenci[i].ogrnum); //ogrencinin numarasi ekrana yazdirilir
		printf("\tÖgrenci Yasi = %d\n", ogrenci[i].ogrYasi); //ogrencinin yasi ekrana yazdirilir
		printf("\tÖgrenci Puani = %0.2f\n", ogrenci[i].ogrPuan); //ogrenci puani yazdirilir
		printf("\tVeri bellek adresi: %p\n", &ogrenci[i]);//bilgilerin depolandigi adres ekrana yazdirilir
		printf("\n\n*********************\n\n");
	}

	return 0;
}

