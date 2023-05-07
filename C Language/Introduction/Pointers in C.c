#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    int x = *a + *b;
    int y = abs(*b - *a); // For using the abs() function, we have to include the stdlib.h header file.
    *a = x;
    *b = y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}