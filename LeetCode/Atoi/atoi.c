#include <stdio.h>
#include <limits.h>

int customAtoi(const char* str) {
    int result = 0;
    int sign = 1; // Initialize the sign as positive

    // Skip leading white spaces
    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    // Check for an optional sign
    if (*str == '+' || *str == '-') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }

    // Convert digits to integer, while checking for overflow
    while (*str >= '0' && *str <= '9') {
        int digit = *str - '0';

        // Check for integer overflow
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        str++;
    }

    return result * sign;
}

int main() {
    const char* str = "-91283472332";
    int num = customAtoi(str);
    printf("Converted integer: %d\n", num);

    return 0;
}
