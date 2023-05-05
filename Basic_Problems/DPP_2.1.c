#include<ctype.h>
#include<stdio.h>


void main()
{
	int no;
	printf("Enter any number");
	scanf("%d",&no);

	if(isdigit(no))
	{
		printf("integer");
	}
	else{
		printf("Not integer ");
	}
//	return 0;
}
