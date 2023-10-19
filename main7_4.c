#include <stdio.h>

void Input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort_arr(int arr[], int len)
{
    int tmp;
    for (int i = 0; i < len - 1; i++)
    {
        for(int j = 0 ; j < len - i - 1 ; j++)
        {  
            tmp = arr[j];
            if (tmp % 10 > arr[j + 1] % 10)
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void Print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int len = 10;
    int arr[len];
    Input(arr, len);
    sort_arr(arr, len);
    Print_arr(arr, len);
    return 0;
}