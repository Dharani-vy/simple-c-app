// app.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sort_numbers(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int find_maximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void process_string(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    str[i] = '\0';
}

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    char string[] = "   Hello, World!   ";

    sort_numbers(numbers, n);
    printf("Sorted Numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int max = find_maximum(numbers, n);
    printf("Maximum Number: %d\n", max);

    process_string(string);
    printf("Processed String: '%s'\n", string);

    return 0;
}
