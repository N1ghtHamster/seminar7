#include <stdio.h>

void input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

float average(int arr[], int len)
{
    int sum;
    for(int i = 0; i <len; i++)
    {
        sum+=arr[i];
    }
    return (float)sum/len;
}

int main()
{
    int n = 5;
    int a[n];
    input(a, n);
    printf("%.3f", average(a, n));
    return 0;
}
