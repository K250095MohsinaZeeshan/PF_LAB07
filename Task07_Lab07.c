#include <stdio.h>

int main() 
{
	printf("CONSONANTS & VOWELS CHECKER\n");
	printf("__________________________\n");
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a word or sensor code: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') 
		{
            ch = ch + ('a' - 'A'); 
        }

        if (ch >= 'a' && ch <= 'z') 
		{

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

