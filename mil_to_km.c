//dosyadan veri alma ve yazdırma
#include<stdio.h>
#define KMS_PER_MILES 1.609
int main(void){
	double kms, miles;
	FILE *inp, *outp;
	
	//Dosyaların içine girme.
	inp = fopen ("myinput.txt", "r");
	outp = fopen ("myoutput.txt", "w");
	
	//Dosyadan okuma
	fscanf(inp, "%lf", &miles);
	fprintf(outp,"The distance in miles is %.2f.\n", miles);
	
	//Hesapalama
	kms = KMS_PER_MILES * miles;
	//Dosyaya yazdırma
	fprintf(outp, "That equals %.2f kilometers.\n", kms);
	
	//Dosyaların içinden çıkma
	fclose(inp);
	fclose(outp);
	
	return (0);
}
