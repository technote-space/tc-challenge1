public class Main {
    public static void main(String[] args) {
        java.util.stream.IntStream.rangeClosed(1, 100).mapToObj(i -> 0 == i % 15 ? "FizzBuzz" : 0 == i % 3 ? "Fizz" : 0 == i % 5 ? "Buzz" : String.valueOf(i)).forEach(System.out::println);
    }
}
