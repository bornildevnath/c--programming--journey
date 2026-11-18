//The program of 5.2 requests the user to enter
//a character and displays a message on the screen
//telling the user whether the character is an alphabet
//or digit, or any other special character.

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter Your Character: ");
    ch = getchar();
    if(isalpha(ch))
    {
        printf("Your Character is an Alphabet");
    }
    else if(isdigit(ch))
    {
        printf("Your Character is a digit");
    }
    else
    {
        printf("Your Character is a Special character");
    }
}
