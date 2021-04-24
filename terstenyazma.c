//v1sion
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char cumle[] = "ISTANBUL RUMELI UNIVERSITESI"; 
    terscevirici(cumle); 
    return 0; 
} 

void terscevirici(char cumle[]) 
{ 
    int uzunluk = strlen(cumle); //strlen string.h kütüphanesinde bulunan, dizinin içindeki karakter sayýsýný bulan fonksiyondur.
  
   
    int i; 
    for (i = uzunluk - 1; i >= 0; i--) { 
        if (cumle[i] == ' ') { 
  
                     
            cumle[i] = '\0'; 
  
                
            printf("%s ", &(cumle[i]) + 1); 
        } 
    } 
  
    
    printf("%s", cumle); 
} 
