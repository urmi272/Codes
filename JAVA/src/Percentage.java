import java.util.Scanner;
public class Percentage {
    public static void main(String []arg){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your marks of 5 subject: ");
        float a = sc.nextInt();
        float b = sc.nextInt();
        float c = sc.nextInt();
        float d = sc.nextInt();
        float e = sc.nextInt();
        float pc = (a+b+c+d+e)/5;
        System.out.println("Your percentage is: "+ pc + "%");
        sc.close();
    }
}
