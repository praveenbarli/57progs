#include <stdio.h>

main()
{
	printf("Enter your name: ");
    char s[100];
    gets(s);
    printf("Hello, %s!",s );
    
}