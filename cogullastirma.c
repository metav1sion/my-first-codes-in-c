//v1sion
//Ýngilizce kelimelerin çoðul halini bulan program
#include<stdio.h>
#include<string.h>

main(){

char kelime[100];
int harf_sayisi;

printf("Lutfen Kelimeyi Giriniz : ");
scanf("%s", kelime);

harf_sayisi = uzunlukdon(kelime);

printf("\nGirdiginiz Kelime %d Adet Harften Olusmaktadir.",harf_sayisi);



if(kelime[harf_sayisi-1] == 'y')
{
	kelime[harf_sayisi-1] = 'i';
	kelime[harf_sayisi] = 'e';
	kelime[harf_sayisi+1] = 's';
	
	printf("\n\nGirdiginiz Kelimenin Cogul Hali : %s", kelime);
}

else if(kelime[harf_sayisi-1] == 's' || (kelime[harf_sayisi-2] == 'c' && kelime[harf_sayisi-1] == 'h') || (kelime[harf_sayisi-2] == 's' && kelime[harf_sayisi-1] == 'h'))
{
	kelime[harf_sayisi] = 'e';
	kelime[harf_sayisi+1] = 's';
	printf("\n\nGirdiginiz Kelimenin Cogul Hali : %s", kelime);
}

else
{
	kelime[harf_sayisi] = 's';
	printf("\n\nGirdiginiz Kelimenin Cogul Hali : %s", kelime);
}



return 0;
}


int uzunlukdon(char kelime[100])
{
	int uzunluk,i;
	
	for(i=0;i<kelime[i] != '\0';i++) // a b c d e f \0
	{
		uzunluk++;
	}
	
	return uzunluk;
}
