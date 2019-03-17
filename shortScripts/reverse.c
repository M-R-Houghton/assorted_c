#include <stdio.h>


void reverse(char *bgn)
{
    char *end = bgn;
    char tmp;
    if (bgn)                    /* only reverse non NULL string */
    {
        while(*end)             /* move ptr forward to end of string */
        {
            ++end;
        }
        --end;                  /* last char is NULL so move back one */ 

        while (bgn < end)       /* swap chars until ptrs meet */
        {
            tmp = *bgn;
            *bgn++ = *end;
            *end-- = tmp;
        }
    }
}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Incorrect number of arguments.\n");
        printf("Usage: ./reverse <string>\n");
        /* should terminate here but don't to check NULL handling */
    }

    printf("String to reverse: %s\n", argv[1]);
    reverse(argv[1]);
    printf("String reversed: %s\n", argv[1]);

    return 0;
}

