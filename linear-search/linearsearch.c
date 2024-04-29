#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // implemented with a simple variable
    int n = 5;

    for (int i = 0; i <= 10; i++) {
        if (i == n) {
            printf("Your number is: %d\n", i);
            continue;
        }
        printf("Your number is not: %d\n", i);
    }

    // implemented with an array
    char* array[] = {"Bob", "Todd", "Jeff", "Hugh", "Leo", "Nick", "John", "Paul", "Alex", "Hope"};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++) {
        if (strcmp(array[i], "Leo") == 0) {
            printf("Here it is: %s\n", array[i]);
            continue;
        }
        printf("%s\n", array[i]);
    }

    return 0;
}
