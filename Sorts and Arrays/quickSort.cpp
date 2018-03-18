#include "quickSort.h"



//function to swap two elements
void swap(int* a, int* b)
{
   
    int t = *a;
    *a = *b;
    *b = t;
 
}

//Using the last element as pivot
int lastPartition(int arr[], int first, int last) {
    
    int pivot = arr[last];  //pivot last element
    
    int i = (first - 1);   //Index of smaller element
   
    
    for (int j = first; j <= last -1; j++)
    {
        // if the current element is smaller than or equal to pivot
        if(arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
            
        }
    }
    swap(&arr[i + 1], &arr[last]);
    return (i + 1);
    
 
}



// quick sort function for last element pivot
void QuickSort(int arr[], int first, int last)
{
   
    if(first < last)
    {
        int pi = lastPartition(arr, first, last);
        
        QuickSort(arr, first, pi - 1);
        QuickSort(arr, pi + 1, last);
    }
}

