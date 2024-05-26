#include <stdio.h>

int main() {
    int num = 12345;
    char str[20]; // Make sure the buffer is large enough

    // Use sprintf to convert integer to string
    sprintf(str, "%d", num);

    printf("Integer as a string: %s\n", str);
    return 0;
}
