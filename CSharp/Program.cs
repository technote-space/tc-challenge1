using System;
using System.Linq;

namespace CSharp
{
	class Program
	{
		static void Main() => Enumerable.Range(1, 100).ToList().ForEach(i => Console.WriteLine(0 == i % 15 ? "FizzBuzz" : 0 == i % 3 ? "Fizz" : 0 == i % 5 ? "Buzz" : i.ToString()));
	}
}
