#include<stdio.h>

int a[100];

int B_Search(int l,int r,int n)
{
    int mid,i;

    printf("\n") ;
    printf("\nleft=%d , right=%d",l,r) ;
    printf("\n ") ;
    for(i=0; i<=4; i++)
        printf("%d ",a[i]);

    if(l<=r)
    {

        mid=(l+r)/2 ;

        if(a[mid]==n)
            return mid ;

        else if(n<a[mid])
            return B_Search(l,mid-1,n) ;

        else 
            return B_Search(mid+1,r,n) ;
    }

    else
        return -1 ;
}

int main()
{

    int i,n,num,res;

    printf("no of element you want to insert: ") ;
    scanf("%d",&n) ;
    
    printf("\nEnter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("\nElement you want to search: ");
    scanf("%d",&num);

    res=B_Search(0,n-1,num);

    if(res== -1)
        printf("\nElement Not Found");
    else
        printf("\nElement present at %d",res);
    
    printf("\n");
    return 0 ;

}
