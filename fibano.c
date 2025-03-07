#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of elements in the sequence: \n");
    scanf("%d", &n);

    int i,f0=0,f1=1,fn;

    for(i=1; i<=n; i++){
        printf("%d ,", f0);
        fn = f0+f1;
        f0 = f1;
        f1 = fn;

    }
}
