#include<stdio.h>

int main()
{
    int a[12]= {1,1,2,2,3,3,4,4,4,5,6,7};
    int j,k;
    static int c;

    for(j=0; j<12; j++)
    {
        for(k=j+1; k<12; k++)
        {
            if(a[k] == a[j])
                c++;
                    break;
        }
    }
    printf("%d", c);
    return 0;
}