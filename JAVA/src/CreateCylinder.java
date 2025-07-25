class Circle{
    private int r;
    public Circle(int r){
        this.r = r;
    }
    public double getArea()
    {
        double area=Math.PI*r*r;
        return area;
    }
    public double getCircum()
    {
        double circ = 2*Math.PI*r;
        return circ;
    }
}
class Cylinder extends Circle{
    private int height;
    public Cylinder(int r, int h){
        super(r);
        height = h;
    }
    public double getArea(){
        double area = 2*super.getArea()+ getCircum()*height;
        return area;
    }
}
public class CreateCylinder {
    public static void main(String[] args) {
        Cylinder c1 = new Cylinder(10, 10);
        System.out.println("cylinder area "+ c1.getArea());
    }
}
