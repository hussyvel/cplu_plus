#include <stdio.h>

int main()

{
	int inteiro = 42;
	float decimal = 3.14159;
	char letra = 'H';
	char texto[] = "Linguagem C";
	unsigned int positivo = 800000000U;
	void *ponteiro = &inteiro;
	double cientifico = 1234.5678;

	printf("%i\n", inteiro);
	printf("%.2f\n", decimal);
	printf("%c\n", letra);	
	printf("%s\n", texto);
	printf("%u\n", positivo);
	printf("Endereço de memória (%%p) %p\n", ponteiro);
	printf("Cientifico (%%e) %e\n", cientifico);
	printf("Cientifico (%%E) %E\n", cientifico);

	return 0;
}
