#include<stdio.h>

int main()
{
    char str[50], stralt[50];
    int i,j,k=0;
    printf("\nEnter your string: ");
    gets(str);
    
    for(i=0; str[i]; i++);
    printf("\ni = %d", i);
    for(j=i-1; j>=0; j--)
    {
        stralt[k++] = str[j];
    }
    stralt[k] = '\0';
    
    printf("\nk = %d", k);
    printf("\nThe reverse of %s is %s", str, stralt);

    return 0;
}