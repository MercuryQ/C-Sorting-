
/* 
 * File:   main.cpp
 * Author: Nicholas MercuryQ
 * Purpose: Implement the merge sort, the quick sort, bubble sort, and the insertion sort.
 * Created on February 3, 2018, 6:49 PM
 */

#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include "quickSort.h"
#include "mergeSort.h"
#include "insertionSort.h"
using namespace std;

//print array function

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);

    }
}

int main() {

    string option;

    // arrays 
    int myQArr[10]; // quick sort array 
    int myMArr[10]; // merge sort array
    int myIArr[10]; // insertion sort array
    int myBArr[10]; // bubble sort 


    int q = sizeof (myQArr) / sizeof (myQArr[0]);
    int m = sizeof (myMArr) / sizeof (myMArr[0]);
    int ins = sizeof (myIArr) / sizeof (myIArr[0]);
    int bub = sizeof (myBArr) / sizeof (myBArr[0]);

    srand(time(0)); //seed time

    while (true) {

        cout << "Option 1: Quick Sort" << endl;
        cout << "Option 2: Merge Sort" << endl;
        cout << "Option 3: Insertion Sort" << endl;
        cout << "Option 4: Bubble Sort" << endl;
        cout << "Option 5: Exit" << endl;
        cin>>option;
        cout << endl;

        // Quick Sort
        if (option == "1") {
            printf("-------------------------------------\n");
            printf("QUICK SORT\n");
            printf("Initial Array of size 10\n");
            for (int i = 0; i < 10; i++) {

                myQArr[i] = 1 + rand() % 999;
                cout << myQArr[i] << " ";
            }

            cout << "\n\n";
            QuickSort(myQArr, 0, q - 1);
            printf("Sorted Array (QuickSort Last Pivot): ");
            printArray(myQArr, q);
            printf("\n");
            printf("-------------------------------------\n\n");

        }            // Merge Sort
        else if (option == "2") {

            printf("-------------------------------------\n");
            printf("MERGE SORT\n");
            printf("Initial Array of size 10\n");
            for (int i = 0; i < 10; i++) {

                myMArr[i] = 1 + rand() % 999;
                cout << myMArr[i] << " ";
            }
            cout << "\n\n";
            mergeSort(myMArr, 0, m - 1);
            printf("\nSorted array (Merge Sort): ");
            printArray(myMArr, m);
            printf("\n");
            printf("-------------------------------------\n\n");

        }

            // Insertion Sort

        else if (option == "3") {

            printf("-------------------------------------\n");
            printf("INSERTION SORT\n");
            printf("Initial Array of size 10\n");
            for (int i = 0; i < 10; i++) {

                myIArr[i] = 1 + rand() % 999;
                cout << myIArr[i] << " ";
            }
            cout << "\n\n";
            insertionSort(myIArr, ins);
            printf("\nSorted array (Insertion Sort): ");
            printArray(myIArr, ins);
            printf("\n");
            printf("-------------------------------------\n\n");

        }
            // Bubble Sort 
        else if (option == "4") {

            printf("-------------------------------------\n");
            printf("BUBBLE SORT\n");
            printf("Initial Array of size 10\n");
            for (int i = 0; i < 10; i++) {

                myBArr[i] = 1 + rand() % 999;
                cout << myBArr[i] << " ";
            }
            cout << "\n\n";
            insertionSort(myBArr, bub);
            printf("\nSorted array (Bubble Sort): ");
            printArray(myBArr, bub);
            printf("\n");
            printf("-------------------------------------\n\n");

            // exit 
        } else if (option == "5") {

            return 0;
        } 
        // validation
        else {
            cout << "Invalid choice!" << endl;
        }

    }

    return 0;

}






