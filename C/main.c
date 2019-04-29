#include<stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) 0 == i % 15 ? printf("FizzBuzz\n") : 0 == i % 3 ? printf("Fizz\n") : 0 == i % 5 ? printf("Buzz\n") : printf("%d\n", i);
}
