/**
Description:
Create a struct Product that stores information about a store item. Implement Merge Sort to sort an array of products by price in ascending order. Remember: you can view our presentations Sara to copy the method but you have to adapt it.

Instructions:

Define a struct Product with:
name (string)
price (float)
Initialize an array of predefined products.
Sort the array using Merge Sort based on price.
Print the list before and after sorting.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void merge(int *arr, int left, int medium, int right) {
    int i, j, k;
    int n1 = medium - left + 1;
    int n2 = right - medium;

    int Left[n1], Right[n2];

    for (i = 0; i < n1; i++)
        Left[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        Right[j] = arr[medium + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            arr[k] = Left[i];
            i++;
        } else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int left, int right) {
    if (left < right) {
        int medium = left + (right - left) / 2;

        mergeSort(arr, left, medium);
        mergeSort(arr, medium + 1, right);

        merge(arr, left, medium, right);
    }
}

void generateRandomArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() * 10000;
    }
}

void bubbleSort(int *array, int size) {
    for (int i = 0; i < size; i++) {
      for(int j = i + 1; j < size; j++) {
        if (array[i] > array[j]) {
            int tempValue = array[j];
            array[j] = array[i];
            array[i] = tempValue;
        }
      }   
    }
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size -1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex])
             minIndex = j;
          }
                // swap
                int temp = array[i];
                array[i] = array[minIndex];
                array[minIndex] = temp;
            }
        }


int main() {
    int size = 10000;
    int *array1 = (int *)malloc(size * sizeof(int));
    int *array2 = (int *)malloc(size * sizeof(int));
    int *array3 = (int *)malloc(size * sizeof(int));
    if (!array1 || !array2 || !array3) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    generateRandomArray(array1, size);
    memcpy(array2, array1, size * sizeof(int));  // Copia del array original para Bubble Sort

    // Medir tiempo de Merge Sort
    clock_t startTimeMergeSort = clock();
    mergeSort(array1, 0, size - 1);
    clock_t endTimeMergeSort = clock();
    double elapsedTimeMergeSort = ((double)(endTimeMergeSort - startTimeMergeSort)) / CLOCKS_PER_SEC;

    // Medir tiempo de Bubble Sort
    clock_t startTimeBubbleSort = clock();
    bubbleSort(array2, size);
    clock_t endTimeBubbleSort = clock();
    double elapsedTimeBubbleSort = ((double)(endTimeBubbleSort - startTimeBubbleSort)) / CLOCKS_PER_SEC;

    //Medir tiempo de Selection Sort
    clock_t startTimeSelectionSort = clock();
    selectionSort(array3, size);
    clock_t endTimeSelectionSort = clock();
    double elapsedTimeSelectionSort = ((double)(endTimeSelectionSort - startTimeSelectionSort)) / CLOCKS_PER_SEC;

    printf("Merge Sort time: %f seconds\n", elapsedTimeMergeSort);
    printf("Bubble Sort time: %f seconds\n", elapsedTimeBubbleSort);
    printf("Selection Sort time: %f seconds\n", elapsedTimeSelectionSort);
    

    return 0;
}



