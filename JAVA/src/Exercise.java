// public class Exercise {
//     public static void main(String args[])
//     {
//         String str = "GeeksforGeeks";
//         int i = 4;

//         // if block
//         if (i == 4) {
//             i++;
//             System.out.println("i = " + i);
//         }
//     }
// }

// class Main {
//     public static void main(String[] args) {
  
//       // declaring double type variables
//       Double n1 = -1.0, n2 = 4.5, n3 = -5.3, largest;
  
//       // checks if n1 is greater than or equal to n2
//       if (n1 >= n2) {
  
//         // if...else statement inside the if block
//         // checks if n1 is greater than or equal to n3
//         if (n1 >= n3) {
//           largest = n1;
//         }
  
//         else {
//           largest = n3;
//         }
//       } else {
  
//         // if..else statement inside else block
//         // checks if n2 is greater than or equal to n3
//         if (n2 >= n3) {
//           largest = n2;
//         }
  
//         else {
//           largest = n3;
//         }
//       }
  
//       System.out.println("Largest Number: " + largest);
//     }
// }

// import java.util.Scanner;

// public class Exercise{
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("Enter a number: ");
//         int num = scanner.nextInt();
//         int originalNum = num;
//         int reversedNum = 0;

//         while (num != 0) {
//             int digit = num % 10;
//             reversedNum = reversedNum * 10 + digit;
//             num /= 10;
//         }

//         if (originalNum == reversedNum) {
//             System.out.println(originalNum + " is a palindrome.");
//         } else {
//             System.out.println(originalNum + " is not a palindrome.");
//         }
//     }
// }

import java.util.Scanner;

public class Exercise{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        scanner.close();

        if (isArmstrong(number)) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }
    }

    public static boolean isArmstrong(int number) {
        int originalNumber, remainder, result = 0, n = 0;
        originalNumber = number;

        // Count the number of digits
        for (;originalNumber != 0; originalNumber /= 10, ++n);

        originalNumber = number;

        // Calculate the sum of the nth power of each digit
        for (;originalNumber != 0; originalNumber /= 10) {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, n);
        }

        // Check if the sum is equal to the original number
        return result == number;
    }
}