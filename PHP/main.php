<?php
foreach (range(1, 100) as $i) echo (0 === $i % 15 ? 'FizzBuzz' : (0 === $i % 3 ? 'Fizz' : (0 === $i % 5 ? 'Buzz' : $i))) . "\n";
