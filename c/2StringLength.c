#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readStringAndDisplayCount()
{
   const int MAX_LENGTH = 100;
   //void* malloc (size_t size);
   char *inputString = (char *) malloc(MAX_LENGTH);
    
   printf("Please enter input string.");
   // scanf("%s", &inputString); //this didn't work for reading a string from console
   //readLine(inputString, MAX_LENGTH);
   gets(inputString);
   
   printf("Input string is %s \n", inputString);
   if(inputString[0] == '\0')
   {
       printf("Input string is empty. So 0 characters.");
   }
   else
   {
       printf("Input string: \"%s\", has %d characters. \n", inputString, strlen(inputString));//getStringLength(inputString));
   }
}

//returns the length of input string, same as strlent() method
int getStringLength(char *s)
{
    int i =0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

// reads a line from console, similar to gets(s) implementation
void readLine(char *line, int MAX_LENGTH )
{
   char c;
   int index = 0;
   while((c = getchar()) != '\n')
   {
       if(index >= MAX_LENGTH)
            break;
       
       line[index++] = c;
   }
    
}

int main()
{
    readStringAndDisplayCount();
    return 0;
}
