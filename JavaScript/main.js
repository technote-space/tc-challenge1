[...Array(100).keys()].forEach(i => ++i && console.log(0 === i % 15 ? "FizzBuzz" : 0 === i % 3 ? "Fizz" : 0 === i % 5 ? "Buzz" : i));