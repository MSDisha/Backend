//Find number of blank spaces and digits 
#include<stdio.h>
int main(){
   char str[50];
   int i,digit=0,space=0;
   printf("enter string :");
   gets(str);
   for(i=0;str[i]!='\0';i++){
      if(str[i]=='0'||str[i]=='1'||str[i]=='2'||
         str[i]=='3'||str[i]=='4'||str[i]=='5'||
         str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
         digit=digit+1;
      else if(str[i]==' '){
      	 space=space+1;
	  }
        
   }
   printf("digit=%d,space=%d",digit,space);
}
