#include <stdio.h>

int main() {
int x ;
int *ptr = &x ;
int **pptr = &ptr;
**pptr = 5 ;
printf("%d",x);

    return 0;
}
