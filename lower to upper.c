#include<stdio.h>
char lower_to_upper(char c1)
{
	char c2;
	c2=(c1>='a'&&c1<='z')?('A'+c1-'a'):c1;
	return(c2);
}
	main()
	{
	 char lower,upper;
	 printf("please enter the a lowercase number");
	 scanf("%c",&lower);
	 upper=lower_to_upper(lower);
	 printf("\n The upper case equivalent is %c\n\n",upper);
	}

