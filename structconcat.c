#include <stdio.h>
#define RB_ENTRY(name) rb##name
struct RB_ENTRY(lists) {
    int myint;
};
struct RB_ENTRY(tree) {
    int myint;
};

#define NEWST struct RB_ENTRY(lists)
#define NEWSTREE struct RB_ENTRY(tree)

int main()
{
    NEWST rr={555};
    // previous line will generate struct rblists
    printf("value: %d\n", rr.myint);
    printf("value: %d\n", rr);

    NEWSTREE tt={22222};
    // previous line will generate struct rblists
    printf("value: %d\n", tt.myint);
    printf("value: %d\n", tt);
}
