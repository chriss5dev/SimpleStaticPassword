#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char key[64] = "Dh3fVbRSL6PEQxWaJRHDjGzCEnpdRFc4u5vwL3jX8QDV5b25kJnGteAXJrpkLgWR";
char input[64];

unsigned char GetPasswordChar(int index)
{
	if(index > 64 && index < 0)
	{return '\0';}

	int value = (int)key[index];
	
	//odd
	if(value % 2 == 1)
	{
		return (unsigned char)(value-3);
	}
	//even
	return (unsigned char)(value+5);
}

bool ValidatePasswordChar(int index, char c)
{
	unsigned char c2 = (unsigned char)c;
	
	if(GetPasswordChar(index) == c2)
	{
		return true;
	}
	return false;
}

int main()
{
	printf("Enter the password: ");
	scanf("%s", input);
	
	for(int i = 0; i < 64; i++)
	{
		if(!ValidatePasswordChar(i, input[i]))
		{
			printf("Incorrect password!\n");
			return 1;
		}
	}
	
	printf("Correct password!\n");
	return 0;
}
