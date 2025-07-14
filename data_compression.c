#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    int count, i, length;

    printf("Enter the string to compress (Run-Length Encoding):\n");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    printf("Compressed string: ");

    i = 0;
    while (i < length) {
        // Count occurrences of the current character
        count = 1;
        while (i + 1 < length && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", input[i], count);  // Print character and count
        i++;
    }

    printf("\n");
    return 0;
}
