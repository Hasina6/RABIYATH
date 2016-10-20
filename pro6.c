#include<stdio.h>
#include<conio.h>
int main()
{
char i;
clrscr();
printf("Enter the character:");
scanf("%c",&i);
if((i>=a&&i<=z)&&(i>=A&&i<=Z))
printf("Alphabet character");
else
printf("Not an Alphabet character");
return 0;
}
