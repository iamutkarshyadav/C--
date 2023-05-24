public class Main {
    public static void main(String[] args) {
        MyCalculator calculator = new MyCalculator();
        int[] numbers = {35, 24, 0, -1, -2, -1, 3};

        for (int i = 0; i < numbers.length; i += 2) {
            try {
                int result = calculator.power(numbers[i], numbers[i + 1]);
                System.out.println(result);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
