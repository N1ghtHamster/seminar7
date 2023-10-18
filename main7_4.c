#include <stdio.h>

void Input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void find_arr(int arr[], int rra[], int len)
{
    int tmp;
    tmp = arr[0] % 10;
    for (int i = 0; i < len; i++)
    {
        if (tmp > arr[i] % 10)
        {
            tmp = arr[i] % 10;
            rra[i] = arr[i];
        }
        printf("%d \n", tmp);
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
    int arr[len],rra[len];
    Input(arr, len);
    find_arr(arr, rra, len);
    Print_arr(arr, len);
    printf("\n");
    Print_arr(rra, len);
    return 0;
}
