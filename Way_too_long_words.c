#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch[101];

    for (int i = 0; i < n; i++) {
        scanf("%s", ch);
        int size = strlen(ch);

        if (size <= 10) {
            printf("%s\n", ch);
        } else {
            printf("%c%d%c\n", ch[0], size - 2, ch[size - 1]);
        }
    }

    return 0;
}
