//Ýlk switch-case çalýþmam
//v1sion
#include<stdio.h>

int main(void){

char sinif;

printf("Lutfen bir gemi sinifi giriniz: ");
scanf("%c", &sinif);

switch (sinif) {
	
	case'B':
	case'b':
		    printf("Savas Gemisi\n");
		    break;
		    
	case 'C':
	case 'c':
		     printf("Hizli Savas Gemisi");
		     break;
		     
	case 'D':
    case 'd':
    	    printf("Muhrip\n");
    	    break;
    	    
    case 'F':
    case 'f':
    	    printf("Frigate\n");
    	    break;
    	    
    default:
    	   printf("Bilinmeyen Gemi Sinifi girdiniz -> %c\n", sinif);
    	   printf("Tekrar deneyiniz!\n\n");
    	   
    	   
    return 0;
    
}
}
