class Circle{
    int radius;
    public Circle(int r){
        radius = r;
    }
    public void calArea(){
        System.out.println("area of circle with radius "+ radius+ " is "+ 3.14*radius*radius);
    }
    public void calCir(){
        System.out.println("Circumfrence of circle: "+ 2*3.14*radius);
    }
}


public class UsingCircle {
    public static void main(String[] args) {
        Circle c = new Circle(10);
        c.calArea();
        c.calCir();
    }  
}
