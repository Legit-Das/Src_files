//ptrsort.cpp
//sorts an array using pointers
#include<iostream>
using namespace std;

int main()
{
    void bsort(int* , int );   //prototype
    const int N = 10;

    int arr[N] = { 37, 84, 62, 91, 11, 65, 57, 28, 19, 49};

    bsort(arr, N);

    for(int i = 0; i<N; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<endl;
    return 0;
}
//-----------------------------------------------------------------
void bsort(int* ptr, int n)     //Bubble sort
{
    void order(int* , int*);    //prototype
    int j,k;

    for(j=0; j<n-1; j++)
    {
        for(k=j+1; k<n; k++)
        {
            order(ptr+j, ptr+k);
        }
    }
}
//-----------------------------------------------------------------
void order(int* num1, int* num2)
{
    if(*num1 > *num2)
    {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
