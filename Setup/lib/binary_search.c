#include <stdio.h>

int lower_bound(int* A, int size, int x){
    int a = 0, b = size-1;
    int k;
    while (a <= b){
        k = (a+b)/2;
        if( A[k] < x)
            a = k + 1;
        else
            b = k-1;
    }
    return a;
}

int upper_bound(int* A, int size, int x){
    int a = 0, b = size-1;
    int k;
    while (a <= b){
        k = (a+b)/2;
        if( A[k] <= x )
            a = k + 1;
        else
            b = k-1;
    }
    return a;
}

int main(){

    int a[] = { 0, 3, 4, 4, 7, 8, 9, 9, 9, 10, 12 }; 
    int sz = sizeof(a)/sizeof(a[0]);

    for(int i = 0; i < sz; ++i)
        printf("%d ", a[i]);
    printf("\n");

    int test;
    scanf("%d", &test);

    printf("Lower bound: %d\n", lower_bound(a, sz, test));
    printf("Upper bound: %d\n", upper_bound(a, sz, test));

    return 0;
}
