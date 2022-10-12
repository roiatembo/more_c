/*
Author: Roia Langa Tembo
Purpose: To print something to the standard output and reading it

*/
#include <stdio.h>

int main()
{
    //scanf is the most general one and reads from stdin and convert it to the format you want
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d",str,&i);
    printf("You have entered the string: %s\n you have entered the integer %d",str,i);
    return 0;
}