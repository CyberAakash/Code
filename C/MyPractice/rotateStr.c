#include <stdio.h>
#include <string.h>

int main() {
  char str[100], num[10];
  int sum, i, rotate;

  while (scanf("%s:%s", str, num) != EOF) {
    sum = 0;
    for (i = 0; i < strlen(num); i++) {
      sum += (num[i] - '0') * (num[i] - '0');
    }

    if (sum % 2 == 0) {
      rotate = 1;
    } else {
      rotate = 2;
    }

    str[rotate] = str[0];
    for (i = 1; i < strlen(str); i++) {
      str[i - rotate] = str[i];
    }
    str[strlen(str) - rotate] = '\0';

    printf("%s\n", str);
  }

  return 0;
}
