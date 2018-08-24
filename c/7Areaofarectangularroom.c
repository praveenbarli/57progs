#include<stdio.h>
#include<stdlib.h>

void main()
{
    float length = 0;
    float width = 0;
    char *roomLength = malloc(4);
    char *roomWidth = malloc(4);

    printf("What is the length of the room in feet?");
    gets(roomLength);

    printf("What is the width of the room in feet?");
    gets(roomWidth);

    printf("You entered the dimensions of %s feet by %s feet", roomLength, roomWidth);

    length = atof((const char*) roomLength);
    width =  atof((const char*) roomWidth);
    //printf("length: %f width: %f", length, width);
    float areaOfRoomInSquareFeet = length * width;
    float areaOfRoomInSquareMeters = areaOfRoomInSquareFeet * 0.09290304;

    printf("\nThe area is \n %.2f square feet \n %.2f square meters", areaOfRoomInSquareFeet, areaOfRoomInSquareMeters);
    
}