/*
 * Auth: Caleb Jackson
 * Date: 03-17-26
 * Course: CSCI-2240 (Sec: 001)
 * Desc: PROG-04, Hometown Greeting
 */


#include <stdio.h>

#define MAXLEN 40
#define MAJOR_VER 1
#define MINOR_VER 0

int main(void)
{
    char first[MAXLEN];
    char last[MAXLEN];
    char city[MAXLEN];
    char state[MAXLEN];

    printf("*** A Silly Hometown Greeting Program (ver %d.%d) ***\n\n", MAJOR_VER, MINOR_VER);
    
    printf("Please enter your full name (first last): ");
    scanf("%s %s", first, last);

    printf("Thank You!\n\n");

    printf("Please enter your hometown (city state): ");
    scanf("%s %s", city, state);

    printf("Thank You!\n\n");

    printf("Hello %s %s from %s, %s!\n\n",
           first, last, city, state);

    printf("Here's what I've learned from you:\n\n");

    printf("\tFirst Name:\t[%24s]\n", first);
    printf("\tLast Name:\t[%24s]\n", last);
    printf("\tHome City:\t[%-24s]\n", city);
    printf("\tHome State:\t[%-24s]\n", state);
    
    printf("\n");
    
    return 0;
}