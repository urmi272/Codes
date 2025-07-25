import java.util.Scanner;
public class ToggleDoor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of doors: ");
        int n = scanner.nextInt();
        boolean[] doors = new boolean[n + 1]; // Array to represent doors (initially all closed)
        
        // Iterate over each pass
        for (int i = 1; i <= n; i++) {
                // Toggle every ith door
                for (int j = i; j <= n; j += i) {
                        doors[j] = !doors[j]; // Toggle the door
                    }
                }
                
                // Print the final state of the doors
                System.out.println("Doors that are open:");
                for (int i = 1; i <= n; i++) {
                        if (doors[i]) {
                                System.out.print(i + " ");
                            }
                }

        //****alternative logic
        // for (int i = 1; i<= Math.sqrt(n); i++) {
        //     System.out.print(i * i + " "); 
        // }
        scanner.close();
    }
}
