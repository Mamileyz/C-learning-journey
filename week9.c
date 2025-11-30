/*#include <stdio.h>

unsigned long long int factorial(int number) {
    if (number <= 1) { // base case
        return 1;
    } else { // recursive step
        return (unsigned long long)number * factorial(number - 1);
    }
}

int main (void) {
    // calculate factorial(i) and display result
    for (int i = 0; i <= 20; ++i) {
        printf("%d! = %llu\n", i, factorial(i));
    }
    return 0;
}


#include <stdio.h>

int main(void) {
    int n[5]; // n is an array of five integers

    // set elements of array n to 0
    for (size_t i = 0; i < 5; ++i) {
        n[i] = 0; // set element at location i to 0
    }

    printf("%s%8s\n", "Element", "Value");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%7zu%8d\n", i, n[i]);
    }

    return 0;
}*/

#include <stdio.h>

int main(void){
    int n[5] = {12,49,21,43,14};

    printf("%s%8s\n", "Element", "Value");

    for (size_t i=0; i<5; ++i){

        printf("%7zu%8d\n", i, n[i]);
    }
}