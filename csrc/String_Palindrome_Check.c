#include<stdio.h>
#include<conio.h>

int strPalindrome(char *);

int main()
{
    char str[50];
    int check;
    clrscr();
    printf("\nEnter your string(within 50 characters): ");
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
    char stralt[50];
    int i,j,k=0, c=0;
    
    for(i=0; str[i] != '\0'; i++);
    
    //printf("\ni = %d\n", i);
    
    for(j= i-1; j>=0; j--)
    {
        stralt[k++] = str[j];
    }
    stralt[k] = '\0';
    /*
    printf("\nk = %d\n", k);
    puts(stralt);
    printf("\n");
    */
    while(i>=0)
    {
        if(str[i--] != stralt[k--])
            c++;
    }
    //printf("\nc = %d", c);
    if(c>0)
        return 1;
    else
        return 0;
}