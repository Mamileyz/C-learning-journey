#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <limits.h> 
#include <math.h> 

#define SIZE 20

// Function prototypes
void generate_array(int arr[], int size, unsigned int seed);
void bubble_sort(int arr[], int size);
void print_array(const int arr[], int size);


// MAIN FUNCTION

int main(void) {
    int arr[SIZE];
    int target_sum; 
    unsigned int seed = 42; 
    int result_scan; 

    // Variables to hold the result
    int closest_pair_a = 0;
    int closest_pair_b = 0;
    int min_diff = INT_MAX; 

    // 1. Array Generation
    generate_array(arr, SIZE, seed);

    // 2. Sorting
    bubble_sort(arr, SIZE);
    
    // Input Validation Loop
    do {
        printf("Enter The Target Sum (integer value):\n");
        result_scan = scanf("%d", &target_sum); 

        if (result_scan == 0) {
            printf("ERROR: Invalid input. Please enter an integer value only.\n");
            while (getchar() != '\n'); 
        }

    } while (result_scan != 1); 

    printf("Target Sum: %d\n", target_sum);
    printf("Sorted Array: ");
    print_array(arr, SIZE);
    puts("");

    // 3. Finding the Closest Pair 
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            int current_sum = arr[i] + arr[j];
            int difference = abs(target_sum - current_sum); 

            // If a smaller minimum difference is found
            if (difference < min_diff) {
                min_diff = difference;
                closest_pair_a = arr[i];
                closest_pair_b = arr[j];
            }
        }
    }
    
    // 4. Output Results
    printf("Closest Pair: %d and %d\n", closest_pair_a, closest_pair_b);
    printf("Pair Sum: %d\n", closest_pair_a + closest_pair_b);
    printf("Minimum Absolute Difference to Target: %d\n", min_diff);

    return 0;
}


// HELPER FUNCTIONS


// Generates Array with Random Values (1-100)
void generate_array(int arr[], int size, unsigned int seed) {
    srand(seed);

    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 100) + 1; 
    }
}

// Implements Bubble Sort Algorithm
void bubble_sort(int arr[], int size) {
    for (int pass = 1; pass < size; pass++) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}

// Prints array elements
void print_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
}