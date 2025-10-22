#include <stdio.h>

int compareStrings(char string1[], char string2[])
 {
    int i = 0;

    while (string1[i] != '\0' && string2[i] != '\0') 
	{
        if (string1[i] != string2[i])
		{

            return 0; 
        }
        i++;
    }

    if (string1[i] == '\0' && string2[i] == '\0')
	 {
        return 1; 
    } 
	else 
	{
        return 0;  
    }
}

int main() {
    char string1[100], string2[100];
    
    printf("STRINGS COMPARISON\n");
    printf("__________________\n");

    printf("\nEnter first string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("\nEnter second string: ");
    fgets(string2, sizeof(string2), stdin);

    int i;
    for (i = 0; string1[i] != '\0'; i++) 
	{
        if (string1[i] == '\n') 
		{
            string1[i] = '\0';
            break;
        }
    }
    for (i = 0; string2[i] != '\0'; i++) 
	{
        if (string2[i] == '\n') 
		{
            string2[i] = '\0';
            break;
        }
    }

    if (compareStrings(string1, string2)) 
	{
        printf("\nThe entered strings are equal.\n");
    } 
	else 
	{
        printf("\nThe entered strings are not equal.\n");
    }

    return 0;
}

