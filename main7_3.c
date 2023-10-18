#include <stdio.h>

void Input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Swap(int arr[], int start, int len)
{
    for (; start < len / 2; start++)
    {
        int tmp = arr[start];
        arr[start] = arr[len - 1 - start];
        arr[len - 1 - start] = tmp;
    }
}

void Print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int len = 12;
    int k = 4;
    int arr[len];
    Input(arr, len);
    Swap(arr, 0, len);
    Swap(arr, 0, k);
    Swap(arr, k, k + len);
    Print_arr(arr, len);
    return 0;
}
