//WAP to reverse a string and check that the string is palindrome or not  
#include <stdio.h>
#include <string.h>

main() {
    char str[20], i, revStr[20],len, pal= 1;
    printf("Enter a string: ");
    gets(str);

    len= strlen(str);

    for (i = 0; i < len; i++) {
        revStr[i] = str[len- i-1];
    }
    revStr[len]='\0'; 

    for (i = 0; i < len; i++) {
        if (str[i] != revStr[i]) {
            pal = 0;
            break;
        }
    }
    printf("Reversed string: %s\n", revStr);
    if (pal) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

