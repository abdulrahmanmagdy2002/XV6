#include "types.h"
#include "stat.h"
#include "user.h"

void 
insertionSort(int arr[], int n)
{
    int j, value;
    for (int i = 1; i < n; i++) 
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}
 
int 
main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf(1, "Usage: insertionSort <number> <number> <number> ...\n");
        exit();
    }

    int n = argc - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i+1]);
    }

    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf(1 , "%d ", arr[i]);
    }
    return 0;
}