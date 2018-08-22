#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *noun = malloc(100);
    char *verb = malloc(100);
    char *adj = malloc(100);
    char *adverb = malloc(100);

    printf("Enter a noun.");
    gets(noun);

    printf("Enter a verb.");
    gets(verb);

    printf("Enter an adjective.");
    gets(adj);

    printf("Enter an adverb.");
    gets(adverb);

    printf("Do you %s your %s %s %s. Thats hilarious!", verb, adj, noun, adverb);

}