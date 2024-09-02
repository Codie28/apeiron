#include <string.h>

void memcat(char *dest, const char *src) {
      int length, j;
      length = strlen(dest);

    // Append the src string to the dest string
    for (j = 0; src[j] != '\0'; j++, length++) {
        dest[length] = src[j];
    }

    dest[length] = '\0';
}
