//WAP to reverse a string and check that the string is palindrome or not  
#include <stdio.h>
#include <string.h>

main() {
    char str[20], i, revStr[20],len, pal= 1;	//data members
    printf("Enter a string: ");
    gets(str);	//input string

    len= strlen(str);	//length of string

    for (i = 0; i < len; i++) {
        revStr[i] = str[len- i-1];	//if string leng-i-1
    }
    revStr[len]='\0'; //till null

    for (i = 0; i < len; i++) {
        if (str[i] != revStr[i]) {	//string not equals to reveversed string 
            pal = 0;	//so palindrome will be 0
            break;
        }
    }
    printf("Reversed string: %s\n", revStr);
    if (pal) {	//condition if it matches palindrome
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

