#include <stdio.h>

int main(void) {

	for (int j = 1; j <= 10; j++) {
		//jeden radek
		for (int i = 1; i <= 10; i++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}

	//sikma plocha
	for (int j = 1; j <= 10; j++) {
		//i je pro 1 radek
		for (int i = 1; i <= j; i++) {
			printf("%3d ", i);
		}
		printf("\n");
	}
}