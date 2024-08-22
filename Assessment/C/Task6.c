//Frequency of character in s string 
#include <stdio.h>
main() {
    char str[20], ch;
    int i,count = 0;	//data members 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);	//stores the frequency of each character(initialize)

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);	//input chararcters

    for (i = 0; str[i] != '\0'; ++i) {	// Calculates frequency of each character
        if (ch == str[i])
            ++count;	
    }

    printf("Frequency of %c = %d", ch, count);
}

