#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[], int l, int n)
{
    int temp, pos = n;
    int max = arr[n];
    for (int i = n; i < l; i++)
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
}

void ssort(int arr[],int l)
{
 int  i;
 for(i=0;i<l;i++)
   swap_max(arr,l,i);
}
