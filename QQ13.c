#include<stdio.h>
void main()
{
	char c;
	printf("ENTER ANY ALPHABET ");
	scanf("%c",&c);
	switch (c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("%c is VOWEL ",c);
		break;
		default : printf("%c is CONSONANT",c);
			
	}
		
	
}