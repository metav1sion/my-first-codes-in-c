// C'deki ilk fonksiyonum
// v1sion
#include<stdio.h>    
#include<math.h>
#define PI 3.14159
	
	double cember_cevre(double yaricap); //çevre hesaplanýr
	double cember_alan(double yaricap); // alan hesaplanýr

int main(void){
	
	double yaricap,
	       alan,
	       cevre;
	       
printf("yaricap giriniz :");
scanf("%lf", &yaricap);

cevre = cember_cevre(yaricap);
alan = cember_alan(yaricap);

printf("cevre = %.2f ve alan = %.2f", cevre, alan);
	
	
  return 0;
}

double cember_cevre(double yaricap)
{
	double cevre;
	cevre = 2 * PI * yaricap;
	return(cevre);
}

double cember_alan(double yaricap)
{
	double alan;
	alan = PI * pow(yaricap, 2);
	return(alan);
	
}

