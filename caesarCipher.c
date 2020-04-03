//Caesar Cipher Algorithm

#include<stdio.h>

#define SHIFT 30

int main(void) {
	char str[1000], caesar[1000];
	int i, offset;
	
	printf("Enter a string: ");
	scanf("%999[^\n]", str);
	
	for(i = 0; str[i] != '\0'; ++i) {
		if(str[i] <= 90 && str[i] >=65) {
			offset = str[i] - 65;
			caesar[i] = 65 + ((offset + SHIFT) % 26);
		}
		
		else if(str[i] <= 127 && str[i] >= 97) {
			offset = str[i] - 97;
			caesar[i] = 97 + ((offset + SHIFT) % 26);
		}
		
		else
			caesar[i] = str[i];
	}
	
	caesar[i] = '\0';
	
	printf("\nEntered string: %s\n", str);
	printf("Caesar code: %s\n", caesar);
	
	return 0;
}
