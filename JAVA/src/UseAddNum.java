class Num {
    private int a;
    private int b;

    public Num(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }
}

class AddNum extends Num{
    private int c;
    public AddNum(int x, int y){
        super(x,y);
    }
    public void add(){
        c = super.getA()+ super.getB();
    }
    public void show(){
        System.out.println("sum is "+ c);
    }
}
public class UseAddNum {
    public static void main(String[] args) {
        AddNum n1;
        n1 = new AddNum(5, 10);
        n1.add();
        n1.show();
    }
}
