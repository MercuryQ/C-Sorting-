

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <array>


using namespace std;


//functions
void swap(int* a, int* b);
int lastPartition (int arr[], int first, int last);

void QuickSort(int arr[], int first, int last);




#endif /* QUICKSORT_H */

