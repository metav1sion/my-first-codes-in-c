//En b�y�k say�y� bulma 
//v1sion
#include <stdio.h>  

int maximum(int x, int y, int z);

int main(void)
{
	int number1;
	int number2;
	int number3;
	
printf("enter three integers:");
	scanf("%d%d%d", &number1, &number2, &number3);
	
	printf("max. is: %d\n", maximum( number1, number2, number3));
	
	return 0;
}

int maximum(int x, int y, int z)

{
	int max = x;
	
	if (y > max) 
	{
    	max = y;
	}
	
	if (z > max) 
	{
		max = z;
	}
	
	
}