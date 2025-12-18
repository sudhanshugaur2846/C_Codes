#include <stdio.h>
#include <string.h>

int main()
{
    char name[500];
    char line[100];

    name[0] = '\0';   // empty string

    printf("Enter text (blank line to stop):\n");

    while (1)
    {
        fgets(line, sizeof(line), stdin);

        if (strcmp(line, "\n") == 0)  // blank line = stop
            break;

        strcat(name, line);   // add line to main string
    }

    int space = 0, lines = 0;
    int l = strlen(name);

    for (int i = 0; i < l; i++)
    {
        if (name[i] == ' ')
            space++;
        if (name[i] == '\n')
            lines++;
    }

    printf("\nFull Text:\n%s", name);
    printf("\nLength: %d", l);
    printf("\nTotal words: %d", space + 1);
    printf("\nTotal lines: %d\n", lines);

    return 0;
}