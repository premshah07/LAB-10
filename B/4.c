#include <stdio.h>
void main() {
  int n,rem;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n>0) {
        rem=n % 10;
        printf("Digits = %d\n",rem);
    	n=n/10;
    }
     
}
