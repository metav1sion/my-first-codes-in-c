//v1sion
#include<stdio.h>

int main(){
   
   int sayi,cevap,j,dongu;
   int m = 1;
   printf("                                          *********************************\n");
   printf("                                          * FAKTORIYEL HESAPLAMA PROGRAMI *\n");
   printf("                                          *********************************\n\n");
   
    while (m < 1906)
	{
    	
   printf("\n0 Ile 9 Arasinda Bir Tam Sayi Giriniz (Programdan Cikmak Icin -1 Yaziniz) : ");
   scanf("%d", &sayi);
   printf("\n");
   dongu = sayi;
   
   if (sayi == 0)
   {
   	printf("***********************************************************\n");
   	printf("%d! = 1",sayi);
   	printf("\n***********************************************************");
   	printf("\n");
   }
   
	if (sayi<=9 && sayi>0)
   {
   	cevap = fact_cal(sayi);
   	printf("***********************************************************\n");
   	printf(" %d! = ",sayi);
   	for (j=0;j<dongu-1;j++)
   	{
   		printf(" %d x ", sayi);
   		sayi--;
	   }
	   printf("1 = ");
	   printf("%d ", cevap);
	   printf("\n***********************************************************");
   	   printf("\n");
   }

   if((sayi<0 || sayi>9) && sayi != -1)
   {
   	printf("\nLutfen 0 Ile 9 Arasi Bir Sayi Giriniz\n\n");
   	
   }
   
   if(sayi == -1)
   {
   	m = 1907;
   }
   
   
   }
   
   
  
   
   return 0;
}


int fact_cal(int sayi)
{
	int cevap = 1, i;
    
    for(i=1;i<=sayi;i++)
    {
    	cevap = cevap * i;
	}
	
	return cevap;
}
https://shop.huawei.com/tr/product/huawei-matebook-13-r7
