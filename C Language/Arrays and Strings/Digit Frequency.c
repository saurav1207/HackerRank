#include <stdio.h>
#include <string.h>

int main() {
    char num[1001];
    scanf("%s", num);

    int count[10] = {0};

    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            count[num[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}
