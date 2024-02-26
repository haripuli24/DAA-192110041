#include <stdio.h>

void copyString(char *src, char *dest) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copyString(src + 1, dest + 1);
}

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    copyString(source, destination);
    printf("Copied string: %s", destination);
    return 0;
}
