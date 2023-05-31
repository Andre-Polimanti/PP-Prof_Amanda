#include <stdio.h>

void main()
{
    int x = 10, y = 20, *p1, *p2;

    p1 = &x;
    p2 = &y;

    p1++;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", &x);
    printf("%d\n", &y);
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", *p1 + *p2);
    printf("%d\n", *(&x));
    printf("%d", &(*p2));
}