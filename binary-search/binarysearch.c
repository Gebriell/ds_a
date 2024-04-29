// simple implementation of binary search

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);
    int target = 5;
    int low = 0;
    int high = length - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == target) {
            printf("Found it: %d\n", array[mid]);
            break;
        } else if (array[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0;
}