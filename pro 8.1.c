#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present (optional)
    char *newline = str;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }

    int len = stringLength(str);

    printf("Length of the string is: %d\n", len);

    return 0;
}
/*
output
peacock: 7



*/
