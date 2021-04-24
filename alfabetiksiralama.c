//v1sion
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int kelimesayisi;
    printf("Lutfen Kelime Sayisini Belirtiniz:\n");
    scanf("%d", &kelimesayisi);
    char kelimeler[kelimesayisi][100], m[100];
    int x, y;
    printf("\nLutfen Kelimeleri Giriniz:\n");
    for (x = 0; x < kelimesayisi; x++)
    {
    	scanf("%s", kelimeler[x]);
	}
    
	printf("\n\n**********************************************\n");
    printf("\nKelimeleriniz Alfabetik Olarak Siralamasi: ");
    
    alfabetiksira(kelimesayisi, kelimeler, m);
    
        
    return 0;
}

void alfabetiksira(int kelimesayisi, char kelimeler[kelimesayisi][100], char m[100])
{
	int x, y;
	
	for (x = 1; x < kelimesayisi; x++)
    {
        for (y = 1; y < kelimesayisi; y++)
        {
            if (strcmp(kelimeler[y - 1], kelimeler[y]) > 0)
            {
                strcpy(m, kelimeler[y - 1]);
                strcpy(kelimeler[y - 1], kelimeler[y]);
                strcpy(kelimeler[y], m);
            }
        }
    }
    
    for (x = 0; x < kelimesayisi; x++)
    {
    	printf("\n%s", kelimeler[x]);
	}
    
}




