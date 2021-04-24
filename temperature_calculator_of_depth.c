//temperature calculator of depth
//v1sion
#include <stdio.h>  

double santigrat_derinlik(double);  
double santigrattan_fahrenhayta(double);  
double sonuc(double,double);


int main() {
double derinlik;
   
printf("Lutfen derinligi giriniz: ");  
scanf("%lf", &derinlik);   

double santigrat = santigrat_derinlik(derinlik);   
double fahrenhayt = santigrattan_fahrenhayta(santigrat);    

sonuc(santigrat, fahrenhayt);    

return (0);

}

double santigrat_derinlik (double derinlik)

{    
return(10 * derinlik + 20);
} 

double santigrattan_fahrenhayta (double santigrat)

{
return( (9.0 / 5.0) * santigrat + 32);
}

double sonuc(double santigrat, double fahrenhayt)

{
 printf("\nGirmis oldugunuz derinligin,\n");
 printf("\nFahrenhayt Degeri: %.1f derecedir.\n", fahrenhayt);
 printf("\nSantigrat Degeri: %.1f derecedir.\n", santigrat);

} 
