//WAP to show
//1. Monday to Sunday using switch case
//2. Vowel or Consonant using switch case 
#include<stdio.h>
main(){
    int day,ch;	//data members
    printf("Enter a number: ");	
    scanf("%d", &day);	//input days 

    switch(day) {	//condition
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input!\n");
            break;
    }

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);	//input alphabets

    switch(ch) {	//condition
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
}




}
