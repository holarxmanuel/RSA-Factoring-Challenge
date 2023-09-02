#include <stdio.h>
#include <stdlib.h>

// Function to factorize a number n into two smaller numbers
void factorize(int n) {
    int p, q;
    for (p = 2; p <= n / 2; ++p) {
        if (n % p == 0) {
            q = n / p;
            printf("%d = %d * %d\n", n, p, q);
            return;
        }
    }
    printf("%d is a prime number.\n", n);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    char *input_file = argv[1];
    FILE *file = fopen(input_file, "r");

    if (file == NULL) {
        printf("File '%s' not found.\n", input_file);
        return 1;
    }

    int n;
    while (fscanf(file, "%d", &n) == 1) {
        if (n <= 1) {
            continue;  // Skip numbers less than or equal to 1
        }
        factorize(n);
    }

    fclose(file);
    return 0;
}
