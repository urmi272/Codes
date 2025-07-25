// class Shape{
//     int dim1, dim2;

//     public Shape(int dim1, int dim2) {
//         this.dim1 = dim1;
//         this.dim2 = dim2;
//     }
//     public double area(){
//         return 0;
//     }
//     public String name(){
//         return "Unknown";
//     }
// }

//Abstract class is used when defination of method is not known
abstract class Shape{
    int dim1, dim2;
    public Shape(int dim1, int dim2) {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }
    abstract public double area();
    abstract public String name();
}

class Rectangle extends Shape{
    public Rectangle(int l, int b){
        super(l,b); //calling the constructor of the base class because it has already been defined
    }
    public double area(){ //Classes which inherits abstract methods must compulsorily override the abstract method
        return dim1*dim2;
    }
    public String name(){
        return "Rectangle";
    }
}

class Triangle extends Shape{
    public Triangle(int b, int h){
        super(b,h);
    }
    public double area(){
        return 0.5*dim1*dim2;
    }
    public String name(){
        return "Triangle";
    }
}

public class UseShape {
    public static void main(String[] args) {
        Shape s;
        s = new Rectangle(10, 20); //dynamic binding
        System.out.println("Area of "+s.name()+" is "+s.area());
        s = new Triangle(5, 20);
        System.out.println("Area of "+s.name()+" is "+s.area());
    }
}

/* Methods which cannot be
 made Abstract-
 • static methods – Since, abstract is used when there is “no functionality defined yet” and static itself means “there is functionality even if you do not have object”.
 • Constructors– Since, constructors are never inherited hence don’t require to be overridden.
 • private methods - These are not accessible in derived class.*/