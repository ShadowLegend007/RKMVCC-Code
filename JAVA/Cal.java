
import java.util.*;

public class Cal 
{
	public static void main(String[]args)
	{
		Scanner sc = new Scanner(System.in);
		while (true)
		{
			System.out.println("----------MENU----------");
            System.out.println("Enter Add For Addition");
            System.out.println("Enter Sub For Subtraction");
            System.out.println("Enter Mul For Multiplication");
            System.out.println("Enter Div For Division");
            System.out.println("Enter Break For Exit");
            System.out.print("Enter your choice:-");
            String choice;
            choice = sc.nextLine();
            int num1,num2;
			switch (choice) 
            {
				case "Add":
					System.out.print("Enter the first number: ");
					num1 = sc.nextInt();
					sc.nextLine();
					System.out.print("Enter the second number: ");
					num2 = sc.nextInt();
					sc.nextLine();
					System.out.println("Result: " + (num1 + num2));
					break;
				case "Sub":
					System.out.print("Enter the first number: ");
					num1 = sc.nextInt();
					sc.nextLine();
					System.out.print("Enter the second number: ");
					num2 = sc.nextInt();
					sc.nextLine();
					System.out.println("Result: " + (num1 - num2));
					break;
				case "Mul":
					System.out.print("Enter the first number: ");
					num1 = sc.nextInt();
					sc.nextLine();
					System.out.print("Enter the second number: ");
					num2 = sc.nextInt();
					sc.nextLine();
					System.out.println("Result: " + (num1 * num2));
					break;
				case "Div":
					System.out.print("Enter the first number: ");
					num1 = sc.nextInt();
					sc.nextLine();
					System.out.print("Enter the second number: ");
					num2 = sc.nextInt();
					sc.nextLine();
					if (num2 != 0)
					{
						System.out.println("Result: " + (num1 / num2));
					}
					else 
					{
						System.out.println("Division by zero not possible");
					}
					break;
				case "Break":
                    sc.close();
                    System.exit(0);
				default:
					System.out.println("Invalid choice. Try again!");
					break;
                    	
			}
		}
	}
        
}
