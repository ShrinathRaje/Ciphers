//Binary cipher

#include<stdio.h>

int get_binary(char c) {
	int binary = 0;
	short int bit;
	int n = c;
	
	for(int y = 1; n != 0; y = y*10) {
		bit = n % 2;
		binary = binary + (bit * y);
		n /= 2;
	}
	
	return binary;
}

int main(void) {
	char string[1000];
	
	printf("Enter a string (max 1000 characters): ");
	scanf("%999[^\n]", string);
	
	puts("\nEncrypted Binary code-");
	for(int i = 0; string[i] != '\0'; ++i)
		printf("%08i ", get_binary(string[i]));
		
	putchar('\n');
	return 0;
}
