#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, Count;
  	Count = 0;

    printf("rohan jindal\n");
  	printf("\n Enter any String :  ");
  	gets(str);
  	
  	printf("\n Enter the Character that you want to Search :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Count++;
 		}
	}
	printf("\n '%c' has Occured %d times.", ch, Count);
	
  	return 0;
}


