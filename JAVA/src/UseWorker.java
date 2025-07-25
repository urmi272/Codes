import java.util.Scanner;
class Worker{
    int hw;
    double pr;
    public void setData(int h, double p){
        hw = h;
        pr = p;
    }
    public double calSalary(){
        double sal=0;
        if (hw<=40) {
            sal = hw*pr;
        }
        else if(hw>40){
            sal = 2*pr*hw;
        }
        return sal;
    }
}
public class UseWorker {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter ur working hours");
       int HoursWorked = sc.nextInt();
       System.out.println("Enter ur pay Rate");
       double payRate = sc.nextInt();;
       Worker w1 = new Worker();
       w1.setData(HoursWorked, payRate);
       System.out.println("your salary is "+w1.calSalary());
       sc.close();
    }
}
