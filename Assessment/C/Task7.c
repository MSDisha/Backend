//Find number of vowels and consonants 
#include <stdio.h>
main(){
   char str[100];
   int i, vowels, consonants;	//data members 
   i = vowels = consonants = 0;	
   printf("Enter any String : ");	
   gets(str);	//input string
   while (str[i] != '\0'){	//checking if string is till null
      if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'||str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
      vowels++;		//Vowels
      }
      else
         consonants++;	//Consonants
         i++;
   }
   printf("vowels in this String = %d", vowels);
   printf("consonants in this String = %d", consonants);
}
