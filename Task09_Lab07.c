#include <stdio.h>
#include <string.h> 

int main() {
    char sentence[200];
    char largestWords[10][100];  
    int maxWordLength = 0;
    int count = 0; 
        
	printf("LENGTH AND LONGEST WORD TRACKER\n");
    printf("_______________________________\n");
    
    printf("\nEnter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, startIndex = 0, wordLength = 0;

    while (1) {
        char ch = sentence[i];

        if (ch != ' ' && ch != '\0' && ch != '\n') {

            wordLength++;
        } else {

            if (wordLength > 0) {
                if (wordLength > maxWordLength) {
                    maxWordLength = wordLength;
                    count = 0; 

                    int j;
                    for (j = 0; j < wordLength; j++) {
                        largestWords[0][j] = sentence[startIndex + j];
                    }
                    largestWords[0][wordLength] = '\0';
                    count = 1;
                } else if (wordLength == maxWordLength) {

                    int j;
                    for (j = 0; j < wordLength; j++) {
                        largestWords[count][j] = sentence[startIndex + j];
                    }
                    largestWords[count][wordLength] = '\0';
                    count++;
                }
            }
            wordLength = 0;
            startIndex = i + 1;
        }

        if (ch == '\0' || ch == '\n') 
		{
            break;
        }
        i++;
    }

    if (count == 0)
	 {
        printf("\nNo words found.\n");
    } else if (count == 1) {
        printf("\nLargest word: %s\n", largestWords[0]);
        printf("\nLength of the word: %d\n", maxWordLength);
    } 
	else 
	{
        printf("\nMore than one word have the same length (%d):\n", maxWordLength);
        int k;
        for ( k = 0; k < count; k++)
		 {
            printf("%s\n", largestWords[k]);
        }
    }

    return 0;
}

