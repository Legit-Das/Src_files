#include <stdio.h>
int main()
{
    int i,len,start=0,end;
	char str[50],rev[50];


	printf("\nEnter a string: ");

    scanf("%[^\n]",str);

    for(len=0; str[len]; len++);

	for(i=0; i<=len; i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			end=i-1;
			while(start<i)
			{
                rev[start]=str[end];
                puts(rev);
                start++;
                end--;
			}
            rev[i] = str[i];
			start=i+1;
		}
      
	}
	printf("Output: %s\n",rev); 
	return 0;
}
