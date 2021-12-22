#include <iostream>
using namespace std;
void max_subarray(int a[20], int n)
{
    int min = 0, max = 0;
    int temp_min = 0, temp_max = 0;
    int array_sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        array_sum = array_sum + a[i] ;
        temp_max = temp_max + a[i];
        if(max < temp_max )
        max = temp_max;
        temp_min = temp_min + a[i];
        if(temp_min < min)
        min = temp_min;
        if(temp_min > 0)
        temp_min = 0;
    }
    cout<<max<<" "<<min<<endl;
    int res = array_sum - min ;
    if(res > max)
    cout<<"Maximun continuous subarray -> "<<res;
    else
    cout<<"Maximun continuous subarray -> "<<max;
}

int main()
{
    int arr[20], n;
    cout << "Enter number of elements -> ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max_subarray(arr, n);
    return 0;
}
