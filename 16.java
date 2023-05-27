import java.util.Scanner;

public class EmployeeDetails {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter Employee ID (between 2001 and 5001): ");
            int employeeId = scanner.nextInt();
            validateEmployeeId(employeeId);

            System.out.print("Enter Employee Name (First letter capital): ");
            String employeeName = scanner.next();
            validateEmployeeName(employeeName);

            System.out.print("Enter Department ID (between 1 and 5): ");
            int departmentId = scanner.nextInt();
            validateDepartmentId(departmentId);

            // Print the employee details
            System.out.println("Employee ID: " + employeeId);
            System.out.println("Employee Name: " + employeeName);
            System.out.println("Department ID: " + departmentId);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    private static void validateEmployeeId(int employeeId) throws Exception {
        if (employeeId < 2001 || employeeId > 5001) {
            throw new Exception("Invalid Employee ID. Please enter a value between 2001 and 5001.");
        }
    }

    private static void validateEmployeeName(String employeeName) throws Exception {
        if (!Character.isUpperCase(employeeName.charAt(0))) {
            throw new Exception("Invalid Employee Name. The first letter should be in capital.");
        }
    }

    private static void validateDepartmentId(int departmentId) throws Exception {
        if (departmentId < 1 || departmentId > 5) {
            throw new Exception(`"Invalid Department ID. Please enter a value between 1 and 5.");
        }
    }
}
