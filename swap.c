#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[], int l, int n)
{
    int temp, pos = 0;
    int max = arr[n];
    for (int i = n + 1; i < l; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    for (int k = n; k < l; k++)
    {
        if (max != arr[k])
            pos++;
        else
            break;
    }
    
    temp = arr[n];
    arr[n] = max;
    arr[pos] = temp;
    for (int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
}

void ssort(int arr[],int l)
{
 int  i;
 for(i=0;i<l;i++)
   swap_max(arr,l,i);
}
