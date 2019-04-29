#include <iostream>
#include <string>

int main() {
	for (int i = 1; i <= 100; i++) std::cout << (0 == i % 15 ? "FizzBuzz" : 0 == i % 3 ? "Fizz" : 0 == i % 5 ? "Buzz" : std::to_string(i)) << std::endl;
}
