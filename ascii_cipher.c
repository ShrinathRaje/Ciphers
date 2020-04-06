//ASCII cipher

#include<stdio.h>

int main(void) {
	char string[1001];

	printf("Enter a string (max 1000 characters): ");
	scanf("%1000[^\n]", string);
	
	puts("\nEncrypted ASCII code");
	for(int i = 0; string[i] != '\0'; ++i)
		printf("%i ", string[i]);
		
	puts("");
	return 0;
}
