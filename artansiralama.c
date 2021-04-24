//v1sion
#include <stdio.h>
void siralama(int [], int, int, int, int);
int main()
{
    int buyukluk, deger, i, j;
    printf("\nKac Adet Sayi Gireceksiniz? :  ");
    scanf("%d", &buyukluk);
    int liste[buyukluk];
    
    printf("\nSayilari Giriniz : ");
    for(i = 0; i < buyukluk; i++)
        scanf("%d", &liste[i]);
        
    siralama(liste, 0, 0, buyukluk, 1);
    
    printf("\nArtan Sekilde Siralanmis Liste : ");
    for(i = 0; i < buyukluk; i++)
        printf("%d  ", liste[i]);
        
    return 0;
}

void siralama(int liste[], int i, int j, int buyukluk, int flag)
{
    int deger;
    if(i < buyukluk - 1)
    {
        if(flag)
            j = i + 1;
        if(j < buyukluk)
        {
            if(liste[i] > liste[j])
            {
                deger = liste[i];
                liste[i] = liste[j];
                liste[j] = deger;
            }
            siralama(liste, i, j + 1, buyukluk, 0);
        }
        siralama(liste, i + 1, 0, buyukluk, 1);
    }
}
