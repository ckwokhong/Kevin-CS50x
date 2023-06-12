#include <stdio.h>

int collatz(int n)
{
    //base case
    if (n == 1) {
        return 0;
    }
    //recursive case
    else if (n % 2 == 0) {
        return 1 + collatz(n / 2);
    }
    else {
        return 1 + collatz(3 * n + 1);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int steps = collatz(num);
    printf("Number of steps: %d\n", steps);

    return 0;
}
