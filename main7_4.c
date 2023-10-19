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
    int tmp1, tmp2;
    
    for (int i = 0; i < len - 1; i++)
    {
        for(int j = 0 ; j < len - i - 1 ; j++)
        {  
            tmp1 = arr[j];
            tmp2 = arr[j + 1];
            if (tmp1 % 10 > tmp2 % 10)
            {
                arr[j] = tmp2;
                arr[j + 1] = tmp1;
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
    int arr[len],rra[len];
    Input(arr, len);
    sort_arr(arr, rra, len);
    Print_arr(arr, len);
    printf("\n");
    Print_arr(rra, len);
    return 0;
}
