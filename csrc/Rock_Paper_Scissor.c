#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void WinLoose(char *, char);
int main()
{
    char rps[10], check;
    int c;
    
    printf("\nEnter rock, paper or scissor(lowercase): ");
    fgets(rps, 10, stdin);
    srand(time(0));
    c = rand()%3;
    if(c==0)
    {
        printf("\nRock!");
        check = 'r';
        WinLoose(rps, check);
    }
    else if(c==1)
    {
        printf("\nPaper");
        check = 'p';
        WinLoose(rps, check);
    }
    else if(c==2)
    {
        printf("\nScissor");
        check = 's';
        WinLoose(rps, check);
    }
    return 0;
}

void WinLoose(char rps[], char check)
{
    printf("\n");
    if(rps[0] == 'r' && check == 's')
        printf("You're winner!\n");
    else if(rps[0] == 'p' && check == 'r')
        printf("You're winner!\n");
    else if(rps[0] == 's' && check == 'p')
        printf("You're winner!\n");
    else if(rps[0] == 'r' && check == 'p')
        printf("You're looser!\n");
    else if(rps[0] == 'p' && check == 's')
        printf("You're looser!\n");
    else if(rps[0] == 's' && check == 'r')
        printf("You're looser!\n");
    else
        printf("Tie!\n");
    
}
