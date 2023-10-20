#include <stdio.h>

void Input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void b_arr(int arr[], int brr[], int len)
{   
    for(int i = 0 ; i < len ; j++)
    {  
        if ((arr[i] / 10) % 10 == 0)
            brr[j++] = arr[i];
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