#include <stdio.h>

void insert_ascii_codes(char *input, char *output)
{
        int i = 0, j = 0;
        while (input[i] != '\0')
        {
                output[j++] = input[i];

                int code = (int)input[i];
                j += sprintf(&output[j], "%d", code);

                i++;
        }

        output[j] = '\0';
}