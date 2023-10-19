#include <stdio.h>

void input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int min(int arr[], int len)
{
    int min;
    for(int i = 0; i < len; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int n = 5;
    int a[n];
    input(a, n);
    printf("%d", min(a, n));
    return 0;
}
