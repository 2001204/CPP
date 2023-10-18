#include <stdio.h>

void Swap(int *a, int *b, int *c);

int main() {
    int a, b, c;

    printf("Pointer : Swap elements using pointers :\n");
    printf("-----------------------------------------\n");
    printf("\nInput the value of 1st element :");
    scanf("%d", &a);
    printf("\nInput the value of 2nd element :");
    scanf("%d", &b);
    printf("\nInput the value of 3rd element :");
    scanf("%d", &c);


    printf("\nValue before swapping are:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    Swap(&a, &b, &c);

    printf("Value after swapping are:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

void Swap(int *n1, int *n2, int *n3) {
    int temp;
    // swapping
    temp = *n1;
    *n1 = *n2;
    *n2 = *n3;
    *n3 = temp;
}
