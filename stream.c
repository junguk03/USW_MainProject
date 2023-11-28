#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char fname[128], buffer[256], word[256];
    int line_num = 0;

    printf("Enter the file name: ");
    scanf("%s", fname);

    printf("Enter the word to search: ");
    scanf("%s", word);

    if ((fp = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "Cannot open file %s.\n", fname);
        exit(1);
    }

    while (fgets(buffer, 256, fp)) {
        line_num++;
        if (strstr(buffer, word)) {
            printf("%s: Line %d - Word '%s' found.\n", fname, line_num, word);
        }
    }

    fclose(fp);
    return 0;
}
