#include<stdio.h>
#include<conio.h>

int textPattern(char *, char *);

int main()
{
    char text[100], pattern[50];
    int count;
    clrscr();
    
    printf("\nEnter the main text(within 50 characters): ");
    gets(text);
    
    printf("\nEnter the pattern to search: ");
    gets(pattern);
    
    count = textPattern(text, pattern);
    
    printf("\n%s appears %d times", pattern, count);
    
    getch();
    return 0;
}

int textPattern(char text[], char pattern[])
{
    int i,j,l1,l2,start,count;
    
    for(l1=0; text[l1] != '\0'; l1++);
    for(l2=0; pattern[l2] != '\0'; l2++);
    
    for(; start < l1-l2; start++)
    {
        i = start;
        for(j=0; j<l2; j++)
        {
            if(text[i] != pattern[j])
                break;
            else if(text[i] == pattern[j])
                i++;
            else if(j == l2 - 1)
            {
                count++;
                break;
            }
        }
    }
    return count;
}