#include <stdio.h>

#define RB_ENTRY(name) rb ## name
struct RB_ENTRY(lists) {
    int myint;
};
#define NEWST RB_ENTRY(lists)
// 1) being
#define decode(s,t,u,m,p,e,d) m ## s ## u ## t
#define begin decode(a,n,i,m,a,t,e)

// 2) myname type e.g. test will be replace with testId
#define MAKE_TYPE(myname) \
typedef int myname ## Id; \


// 1) being is replaced with main function based on the specified concatination ## defined in decode function
// Example:
// int begin() -> int decode(a,n,i,m,a,t,e)() -> int m##a##i##n() -> int main() 
int begin()
{
    NEWST;
    //l.myint = 100;
    rblists.myint = 1000;
    printf("value: %d\n", rblists.myint);
    //2)
    MAKE_TYPE(test);
    testId t;
    t=123;
    printf("%d",t);
    printf("Stumped?\n");

}
