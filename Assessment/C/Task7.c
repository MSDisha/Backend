//Find number of vowels and consonants 
#include <stdio.h>
int main(){
   char str[100];
   int i, vowels, consonants;
   i = vowels = consonants = 0;
   printf("Enter any String : ");
   gets(str);
   while (str[i] != '\0'){
      if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'||str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
      vowels++;
      }
      else
         consonants++;
         i++;
   }
   printf("vowels in this String = %d", vowels);
   printf("consonants in this String = %d", consonants);
}
