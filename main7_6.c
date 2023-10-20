#include <stdio.h>

void Input(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
}
int count_num(int arr[], int len)
{
    int count;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
            count++;
        if (arr[i] == 11)
            count--;
    }
    return (count < 0 ? 11 : 1);
}

int main()
{
    int len = 10;
    int arr[len];
    Input(arr, len);
    printf("%d", count_num(arr, len));
    return 0;
}