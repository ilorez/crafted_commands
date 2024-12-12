
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isprint

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        perror("fopen");
        return EXIT_FAILURE;
    }

    int c;
    int count = 0;
    while ((c = fgetc(file)) != EOF)
    {
        count++;

        if (isprint(c))
        {
            printf("%c", c);
        }
        else if (c == '\n')
        {
            printf("\\n");
        }
        else if (c == '\0')
        {
            printf("\\0");
        }
        else
        {
            printf("{%d}", c);
        }
    }

    // Print EOF explicitly
    printf("[EOF]\n");

    printf("Total chars: %d\n", count);

    // Close the file
    fclose(file);

    // Print success message with styling
    printf("\033[1;32m\u2714 File read successfully!\033[0m\n");

    return EXIT_SUCCESS;
}

