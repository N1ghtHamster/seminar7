#include <stdio.h>

void Input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
}

int count_num_add_brr(int arr[], int len, int brr[])
{   
    int j = 0;
    for(int i = 0 ; i < len ; i++)
    {  
        if ((arr[i] / 10) % 10 == 0)
            brr[j++] = arr[i];
    }
    return j;
}

void Print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int len = 10;
    int arr[len], brr[len];
    Input(arr, len);
    int count = count_num_add_brr(arr, len, brr);
    Print_arr(brr, count);
    return 0;
}
