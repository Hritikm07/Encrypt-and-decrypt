#include<stdio.h>
int main()
{
	int i, x,a;
	char str[100];

		printf ("Enter the string: ");
	gets(str);
		
	
		for (i=0; (i<100 && str[i]); i++)
		str[i] = str[i] + 4;
		printf("Encrypted string: %s\n", str);
		
		for (i=0; (i<100 && str[i]); i++)
		str[i] = str[i] - 4;
		printf("Decrypted string: %s\n", str);
	}
