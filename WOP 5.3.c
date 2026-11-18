//A program that reads a character from keyboard and then prints
//it in reverse case is given in 5.3. That is,
//if the input is upper case, the output will be lower case and vice versa.
#include<stdio.h>
#include<ctype.h>
int main()
{
    int ch;
    printf("Enter your character:\n");
    ch = getchar();
    if (islower(ch))
    {
        putchar(toupper(ch));
    }
    else
    {
        putchar(tolower(ch));
    }
}
