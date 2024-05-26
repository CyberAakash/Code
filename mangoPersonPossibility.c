// C program to find the number of possible ways of distributing m mangoes to r people.


//with repetition
//Example :
// Here are the 28 possible ways of distributing 6 mangoes to 3 people:

// Person 1 gets 0 mangoes, person 2 gets 0 mangoes, person 3 gets 6 mangoes
// Person 1 gets 0 mangoes, person 2 gets 1 mango, person 3 gets 5 mangoes
// Person 1 gets 0 mangoes, person 2 gets 2 mangoes, person 3 gets 4 mangoes
// Person 1 gets 0 mangoes, person 2 gets 3 mangoes, person 3 gets 3 mangoes
// Person 1 gets 0 mangoes, person 2 gets 4 mangoes, person 3 gets 2 mangoes
// Person 1 gets 0 mangoes, person 2 gets 5 mangoes, person 3 gets 1 mango
// Person 1 gets 0 mangoes, person 2 gets 6 mangoes, person 3 gets 0 mangoes
// Person 1 gets 1 mango, person 2 gets 0 mangoes, person 3 gets 5 mangoes
// Person 1 gets 1 mango, person 2 gets 1 mango, person 3 gets 4 mangoes
// Person 1 gets 1 mango, person 2 gets 2 mangoes, person 3 gets 3 mangoes
// Person 1 gets 1 mango, person 2 gets 3 mangoes, person 3 gets 2 mangoes
// Person 1 gets 1 mango, person 2 gets 4 mangoes, person 3 gets 1 mango
// Person 1 gets 1 mango, person 2 gets 5 mangoes, person 3 gets 0 mangoes
// Person 1 gets 2 mangoes, person 2 gets 0 mangoes, person 3 gets 4 mangoes
// Person 1 gets 2 mangoes, person 2 gets 1 mango, person 3 gets 3 mangoes
// Person 1 gets 2 mangoes, person 2 gets 2 mangoes, person 3 gets 2 mangoes
// Person 1 gets 2 mangoes, person 2 gets 3 mangoes, person 3 gets 1 mango
// Person 1 gets 2 mangoes, person 2 gets 4 mangoes, person 3 gets 0 mangoes
// Person 1 gets 3 mangoes, person 2 gets 0 mangoes, person 3 gets 3 mangoes
// Person 1 gets 3 mangoes, person 2 gets 1 mango, person 3 gets 2 mangoes
// Person 1 gets 3 mangoes, person 2 gets 2 mangoes, person 3 gets 1 mango
// Person 1 gets 3 mangoes, person 2 gets 3 mangoes, person 3 gets 0 mangoes
// Person 1 gets 4 mangoes, person 2 gets 0 mangoes, person 3 gets 2 mangoes
// Person 1 gets 4 mangoes, person 2 gets 1 mango, person 3 gets 1 mango
// Person 1 gets 4 mangoes, person 2 gets 2 mangoes, person 3 gets 0 mangoes
// Person 1 gets 5 mangoes, person 2 gets 0 mangoes, person 3 gets 1 mango
// Person 1 gets 5 mangoes, person 2 gets 1 mango, person 3 gets0mangoes
// Person1gets6mangoes,person2gets0mangoes,person3gets0mangoes
// The formula (m+r-1)! / ((r-1)! * m!) gives us the total number of possible ways of distributing the mangoes among the people when repetitions are allowed. In this case, m=6 and r=3, so the formula gives us:

// (6+3-1)! / ((3-1)! * (6!)) = (8!)/(2!6!) = (8*7)/(2*1) =28

// Therefore, there are a total of 28 possible ways of distributing 6 mangoes to 3 people when repetitions are allowed.

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int m, r;
    printf("Enter the number of mangoes (m): ");
    scanf("%d", &m);
    printf("Enter the number of people (r): ");
    scanf("%d", &r);
    if (m < r) {
        printf("Error: number of mangoes must be greater than or equal to number of people\n");
        return 1;
    }
    int ways = factorial(m+r-1) / (factorial(r-1) * factorial(m));
    printf("Number of possible ways of distributing %d mangoes to %d people: %d\n", m, r, ways);
    return 0;
}
