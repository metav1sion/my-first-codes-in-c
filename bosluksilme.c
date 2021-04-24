//v1sion
#include<stdio.h>
#include<string.h>

int main(){
	
	char s[100];
	char bosluk = ' ';
	int m;
    int harfsayisi;
	
	printf("Giriniz : ");
	gets(s);
	
	harfsayisi = strlen(s);
	
	printf("\n\nBosluklarin Silinmis Hali : ");
	
	for (m=0;m<harfsayisi;m++)
	{
		if(s[m] != bosluk)
		{
			printf("%c", s[m]);
		}
	}
	
	
	return 0;
}
