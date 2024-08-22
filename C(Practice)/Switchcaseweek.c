#include<stdio.h>
int main(){
	char a;
	printf("Enter the Days: ");
	scanf("%s",&a);
	switch(a)
	{
		case '1':
			printf("Monday");
		break;
		case '2':
			printf("Tuesday");
		break;
		case '3':
			printf("Wednesday");
		break;
		case '4':
			printf("vowel");
		break;
		case '5':
			printf("Friday");
		break;
		case '6':
			printf("Saturday");
		break;
		case '7':
			printf("Sunday");
		break;
		default:
			printf("Invalid");
		break;
			
			
	}
}
