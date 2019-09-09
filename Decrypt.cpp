#include<stdio.h>
int main()
{
	int i, x;
	char str[100];

		printf ("Decrypt the string");
	gets(str);

		for (i=0; (i<100 && str[i]); i++)
		str[i] = str[i] - 3;
		printf("Decrypted string; %s\n", str);
		
}
