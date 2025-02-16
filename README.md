# Comparing Sorting Algorithms in C

This C program demonstrates the implementation and comparison of three sorting algorithms: Merge Sort, Bubble Sort, and Selection Sort. The program generates a large array of random integers and measures the time taken by each sorting algorithm to sort the array.

## Description

The program performs the following steps:
1. Defines a `Product` struct to store information about store items (though not used in the      current implementation).
2. Implements the Merge Sort algorithm to sort an array of integers.
3. Implements the Bubble Sort algorithm to sort an array of integers.
4. Implements the Selection Sort algorithm to sort an array of integers.
5. Generates a large array of random integers.
6. Sorts the array using each of the three sorting algorithms and measures the time taken by each.
7. Prints the time taken by each sorting algorithm.

## Instructions

1. **Define a struct Product** (not used in the current implementation):
   - `name` (string)
   - `price` (float)

2. **Initialize an array of predefined products** (not used in the current implementation).

3. **Sort the array using Merge Sort based on price** (not used in the current implementation).

4. **Print the list before and after sorting** (not used in the current implementation).

## Code Explanation

### Include Statements

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

Sure, here is the complete content formatted for your 

README.md

 file:

```markdown
# Comparing Sorting Algorithms in C

This C program demonstrates the implementation and comparison of three sorting algorithms: Merge Sort, Bubble Sort, and Selection Sort. The program generates a large array of random integers and measures the time taken by each sorting algorithm to sort the array.

## Description

The program performs the following steps:
1. Defines a `Product` struct to store information about store items (though not used in the current implementation).
2. Implements the Merge Sort algorithm to sort an array of integers.
3. Implements the Bubble Sort algorithm to sort an array of integers.
4. Implements the Selection Sort algorithm to sort an array of integers.
5. Generates a large array of random integers.
6. Sorts the array using each of the three sorting algorithms and measures the time taken by each.
7. Prints the time taken by each sorting algorithm.

## Instructions

1. **Define a struct Product** (not used in the current implementation):
   - `name` (string)
   - `price` (float)

2. **Initialize an array of predefined products** (not used in the current implementation).

3. **Sort the array using Merge Sort based on price** (not used in the current implementation).

4. **Print the list before and after sorting** (not used in the current implementation).

## Code Explanation

### Include Statements
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
```
- These headers provide functions for input/output operations, memory allocation, string manipulation, and time measurement.

### Merge Sort Implementation
```c
void merge(int *arr, int left, int medium, int right) {
    // Merging two halves of the array
}

void mergeSort(int *arr, int left, int right) {
    // Recursively dividing the array and merging
}
```
- **merge**: Merges two halves of an array.
- **mergeSort**: Recursively divides the array and calls `merge` to sort and merge the divided parts.

### Bubble Sort Implementation
```c
void bubbleSort(int *array, int size) {
    // Sorting the array using Bubble Sort
}
```
- **bubbleSort**: Sorts the array using the Bubble Sort algorithm.

### Selection Sort Implementation
```c
void selectionSort(int array[], int size) {
    // Sorting the array using Selection Sort
}
```
- **selectionSort**: Sorts the array using the Selection Sort algorithm.

### Utility Functions
```c
void generateRandomArray(int *array, int size) {
    // Generates a random array of integers
}
```
- **generateRandomArray**: Generates a random array of integers.

### Main Function
```c
int main() {
    // Main function to execute the sorting algorithms and measure their performance
}
```
- **main**: Generates a random array, sorts it using the three sorting algorithms, and measures the time taken by each algorithm.

### Example Output
```plaintext
Merge Sort time: 0.002345 seconds
Bubble Sort time: 0.123456 seconds
Selection Sort time: 0.098765 seconds
```
- The program prints the time taken by each sorting algorithm to sort the array.

## How to Run

1. Compile the program using a C compiler:
   ```sh
   gcc comparingSortingMethods.c -o comparingSortingMethods
   ```

2. Run the compiled program:
   ```sh
   ./comparingSortingMethods
   ```

## Conclusion

This program provides a comparison of three sorting algorithms in terms of their execution time. It helps in understanding the efficiency of different sorting techniques when applied to large datasets.


