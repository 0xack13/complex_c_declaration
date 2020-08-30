#include <string.h>
#include <stdio.h>

#define PN 8

typedef struct
{
    char pn[PN + 1];
    int price;
} price_t;

int main(int argc, char *argv[])
{
    // from the following line, compiler will show errors and warning with the information in the line directive e.g. myexample.rb line 39xx
    #line 3900 "myexample.rb"
    struct extree *ex;
    // samples[], *val and *pp all of them are of type price_t
    const price_t samples[] =
        {
            {"THX1138", 40},
            {"ED2317", 55},
            {"NGC1136", 32},
        },
                  *val,
                  *pp;
    printf("size of samples: %d\n", sizeof(samples));
    printf("size of samples[0]: %d\n", sizeof(samples[0]));
    printf("size of int: %d\n", sizeof(int));
    printf("size of char: %d\n", sizeof(char));
    printf("size of price_t: %d\n", sizeof(price_t));
    for (pp = samples; pp < samples + sizeof(samples) / sizeof(samples[0]); pp++)
    {
        printf("%s\n", pp->pn);
    }

    return 0;
}
