#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(){
    int lower = 1;

    printf("Enter a number: ");
    int upper;
    scanf("%i", &upper);

    int total = 0;

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    clock_t start = clock();

    int check = 0;

    for (int num = lower; num < upper + 1; num++){
        if (num > 1){
            for (int i = 2; i < floor((num/2) + 1) ; i++){
                if (num % i == 0){
                    check = 1;
                    break;
                }
            }

            if (check == 0){
                printf("%d\n", num);
                total += 1;
            } else {
                check = 0;
            }     
        }
    }

    printf("Total number of primes in the range: %d\n", total );
    clock_t exetime = clock() - start;
    printf("Time it took: %Lf (s)\n", (long double) ((long double) exetime / (double) CLOCKS_PER_SEC));
    return 0;
}

