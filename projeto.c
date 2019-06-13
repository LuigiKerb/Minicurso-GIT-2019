#include <stdio.h>

int soma(int a, int b){
	return a+b;
}

int subtracao(int a, int b){
	return a-b;
}

int multipli(int a, int b){
	return a*b;
}

float dividir(int a, int b){
	return a/b;
}

int main(){
	printf("Somando dois numeros: %d\n", soma(2,3));
	printf("Subtraindo dois numeros: %d\n", subtracao(5,2));
	printf("Multiplicando dois numeros: %d\n", multipli(5,2));
	printf("Dividindo dois numeros: %.2f\n", dividir(10,3));
	return 0;
}
