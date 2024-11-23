#include <stdio.h>
#include <string.h>

void reverseStringHelper(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseStringHelper(str, start + 1, end - 1);
}

void reverseString(char str[]) {
    int length = strlen(str);
    reverseStringHelper(str, 0, length - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %s", str);
    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
