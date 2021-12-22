#include<stdio.h>
#include<conio.h>

int main()
{
    char str[40];
    int i;
    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i] != '\0'; i++);
    
    printf("\n");
    for(; i>= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf(" is the string reversed.");
    getch();
    return 0;
}