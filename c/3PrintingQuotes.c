#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *quote = (char *) malloc(1000);
    char *author = (char *)malloc(100);

    printf("What is the quote?");
    quote = gets(quote);

    printf("Who said it?");
    author = gets(author);
    
    // strcpy(quoteConst, quote);
    //syntax: strcat(char * , const char *)
    strcat(author , " says, ");
    strcat(author, "\"");
    const char *quoteConst = quote;
    strcat(author, quoteConst);
    strcat(author, "\"");
    printf("%s", author);
   // printf("%s says, \"%s\".", author, quote);
    return 0;
}

