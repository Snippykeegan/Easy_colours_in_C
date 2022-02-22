#include <stdio.h>
#include "Easy_Colours.h"
#include <conio.h>

int main()
{
    printf("This text should be normal.\n");
    _getch();

    GreenText();
    printf("This text should be green.\n");
    _getch();

    YellowText();
    printf("This text should be yellow.\n");
    _getch();

    RedText();
    printf("This text should be red.\n");
    _getch();

    BlueText();
    printf("This text should be blue.\n");
    _getch();

    WhiteText();
    printf("This text should be white\n");
    _getch();

    PinkText();
    printf("This text should be pink\n");
    _getch();

    ResetText();
    printf("This text should be back to normal.\n");
    _getch();

}
