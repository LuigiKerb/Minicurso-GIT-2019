#include <stdio.h>

int soma(int a, int b){
	return a+b;
}

int subtracao(int a, int b){
	return a-b;
}

int main(){
	printf("Somando dois numeros: %d\n", soma(2,3));
	printf("Subtraindo dois numeros: %d\n", subtracao(5,2));
	return 0;
}
