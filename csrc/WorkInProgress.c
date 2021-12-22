#include<stdio.h>
#include<conio.h>

int strPalindrome(char *);

int main()
{
    char str[100];
    int check;
    clrscr();
    printf("\nEnter string: ");
    gets(str);
    
    check = strPalindrome(str);
    
    if(check == 1)
        printf("\n%s is not palindrome.", str);
    else
        printf("\n%s is palindrome.", str);

    getch();
    return 0;
}

int strPalindrome(char str[])
{
    int i, j,k, c=0;
    char stralt[100];
    
    for(i=0; str[i] != '\0'; i++);
    k=i;
    j=0;
    while(k>=0)
    {
        stralt[j++] = str[k--];
    }
    stralt[j] = '\0';
    j--;
    printf("i = %d, j = %d\n", i,j);
    puts(stralt);
    printf("\ni = %d, j = %d", i,j);
    for(; (i >= 0)&&(j >= 0); i--, j--)
    {
        if(str[i] != stralt[j])
        {
            c++;
        }
        
    }
    printf("\nc = %d", c);
    if(c>0)
        return 1;
}