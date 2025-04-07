#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *rot13(const char *src)
{
    char *result = calloc(strlen(src) + 1, sizeof(char));
    strcpy(result, src);
    for (char *c = result; *c != '\0'; c++) {
      if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M')) {
        *c += 13;
      } else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z')) {
        *c -= 13;
      }
    }
    return result;
}
