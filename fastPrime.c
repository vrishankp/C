#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
int max(int num1, int num2) {
    return (num1 > num2 ) ? num1 : num2;
}

int main(){
    int lower = 2;

    printf("Enter a number: ");
    int upper;
    scanf("%i", &upper);

    int primes[max(sqrt(upper), 9593)];
    int pCount = 0;

    int total = 0;

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    clock_t start = clock();

    int check = 0;

    for (int num = lower; num < upper + 1; num++){
        if (num == 2){
            primes[pCount] = 2;
            printf("%d\n", num);
            total++;
            pCount++;
        } else {
            for (int i = 0; i < pCount; i++){

               // if (primes[i] * primes[i] > upper){
                 //   break;
                //}
                if (num % primes[i] == 0){
                    check = 1;
                    break;
                }
            }

            if (check == 0){
                printf("%d\n", num);
                if (num <= sqrt(upper)){
                    primes[pCount] = num;
                    pCount++;
                }
                total ++;
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

