#include <stdio.h>

// implemented with a simple variable

// int main () {
//   int n = 5;

//   for (int i = 0; i <= 10; i++)
//     {
//         if (i == n) {
//             printf ("Your number is: %d \n", i);
//             continue;
//         }
//         printf ("Your number is not: %d \n", i);
//     }
    
//   return 0;
// }

// implemented with an array

int main () {
    char* array[] = {"Bob","Todd","Jeff","Hugh","Leo","Nick","John","Paul","Alex","Hope"};
    int length = sizeof(array)/sizeof(array[0]);
    
    // printf("Elements present in array: %d", length);
    
    for (int i = 0; i < length; i++) {
        if (array[i] == "Leo") {
            printf ("Here it Is!!!\n");
            continue;
        }
        printf ("%s\n", array[i]);
    }
    
    return 0;
}