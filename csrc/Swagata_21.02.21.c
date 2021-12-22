#include<stdio.h>

int fun(int n) {

    int i,j,k,p,q=0 ;

    for(i=1; i<=n; i++) {
        p=0 ;

        for(j=n; j>1; j=j/2)
            ++p ;

        for(k=1; k<=p; k=k*2)
            ++q ;
    }
    return q ;
}

int main()
{
    printf("%d",fun(256)) ;

    return 0 ;
}