#include <stdio.h>

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int space = 1; space <n-i; space++)
            printf("  ");
        int coef = 1;

        for(int j = 1; j<=i; j++){
            printf("%4d",coef);
            coef = coef * (i-j) / j;
        }

        printf("\n");
    }
}
