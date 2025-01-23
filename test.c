
include <stdio.h>
include <stdlib.h>
include <string.h>
define BUFSIZER1 512
define BUFSIZER2 ((BUFSIZER1/2) - 8)
int main(int argc, char argv) { char buf1R1 = (char ) malloc(BUFSIZER1); char buf2R1 = (char )
malloc(BUFSIZER1); char buf2R2 = (char ) malloc(BUFSIZER2); char buf3R2 = (char ) malloc(BUFSIZER2);
if (argc < 2) {
fprintf(stderr, "Usage: %s <string>\n", argv[0]);
return 1;
}
strncpy(buf2R1, argv[1], BUFSIZER1 - 1);
buf2R1[BUFSIZER1 - 1] = '\0'; // Null-terminate the string
// Free the buffers
free(buf1R1);
free(buf2R1);
free(buf2R2);free(buf3R2);
return 0;
}
