//latin cipher

#include<stdio.h>

int main(void) {
	char string[1001];
	
	printf("Enter a string (max 1000 characters): ");
	scanf("%1000[^\n]", string);
	
	puts("\nLatin Alphabet Cipher Code-");
	for(int i=0; string[i] != '\0'; ++i) {
		if(string[i] <= 'Z' && string[i] >= 'A')
			printf("%i ", string[i] - 'A' + 1);
		else if(string[i] <= 'z' && string[i] >= 'a')
			printf("%i ", string[i] - 'a' + 1);
		else
			printf("%c", string[i]);
	}
	putchar('\n');
	return 0;
}
