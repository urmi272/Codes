import java.util.Scanner;
public class Basics //When the class is public, name of file = class name.
{
    int n0; //class level variable
    public static void main(String[] vars) throws Exception /*compiler executes the codes starts always from the main function.
    Static keyword lets u execute function w/o creating objects of class*/
    {
        char n = 'A'; //local variable can't be left unassigned
        int n1;
        n1=n; //Type conversion (int>byte)
        short n2 = 6;
        int n3 = 3;
        // Assossiavity
        // System.out.println(34>4 || 52<32);
        // System.out.println(34>4 && 52<32);
        System.out.println("Ohh Hello "+ vars[0]); //java <classname> <input> ---command line input
        int a, b, c;
        a= Integer.parseInt(vars[1]);
        b= Integer.parseInt(vars[2]);
        c= a+b;
        System.out.println("converting concatenatiom to addition using wapper class,"+c);
        Scanner sc = new Scanner(System.in);
        System.out.println("What's your name?"); //ln move the cursor to naxt line
        String s = sc.nextLine(); //taking user input as string
        String str = s.toUpperCase(); //string method ---> lenght(), toLowerCase(), substring(int start, int end), trim(), replace(o, n), startsWith(), endsWith()
        
        System.out.println("enter your gender (M/F): ");
        char gender = (char) System.in.read(); //TAKE ONLY ONE CHAR
        System.out.println("Your gender is :"+ gender);
        System.out.printf("Oh hii %s plz enter a number: ", str); // %c for char %d for int %f for float %s for string
        int x = sc.nextInt(); //taking user input in int
        int sum = x+n1+n2+n3;        
        System.out.println("Total sum is: "+ sum); //println for multi-line
        sc.close();
    }
}