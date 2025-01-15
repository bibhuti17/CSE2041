/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Find hydroxide.
*/
#include <stdio.h>
#include <string.h>
int hydroxide(char[]);

void main()
{
	char chemical[8];
	printf("\nEnter chemical - ");
	scanf("%s", chemical);
	if(hydroxide(&chemical))
		printf("\nIt is a hydroxide.");
	else
		printf("\nIt is not a hydroxide.");
}

int hydroxide( *str)
{
	if (str == NULL) {
        	return 0;
    	}
    
    	int len = strlen(str);
    
    	if (len < 2) {
        	return 0;
    	}
    
    	return (str[len - 2] == 'O' && str[len - 1] == 'H') ? 1 : 0;
}
