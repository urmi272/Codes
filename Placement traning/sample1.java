// class A{
//     static void show(){System.out.println("A ");}
// }
// class B extends A{
//     void show(){System.out.println("B ");} // cant override static method {compilation error}
// }

// interface I1{
//     default void show(){
//         System.out.println("I1");
//     }
// }
// interface I2{
//     default void show(){
//         System.out.println("I2");
//     }
// }
// class A implements I1, I2{} //duplicate default method not allowed // interface need to be initialize {compilation error}


// class A{
//     void show(Object o){System.out.println("Object");}
// }
// class B extends A{
//     void show(String s){System.out.println("String");}
// }
// public class sample1{
//     public static void main(String[] args){
//         A obj = new B();
//         obj.show("Hello");
//     } // Object 
// }

// class A {int x = 5;}
// class B extends A{ int x = 10;}
// public class sample1{
//     public static void main(String[] args){
//         B b = new B();
//         A a = b;
//         System.out.println(a.x + " "+ b.x);
//     }
// } // 5 10

// class A{
//     private void show(){}
// }
// class B extends A{
//     void show(){}
// }//no relation


// abstract class A{
//     A(){
//         System.out.print("A");
//     }
//     abstract void show();
// }
// class B extends A{
//     B(){
//         System.out.print("A");
//     }
//     void show(){}
// } // A B

// class A{void show(int... x) {System.out.println("Varargs");}}
// class B extends A {void show(int x) {System.out.println("Single");}}
// public class sample1{
//     public static void main(String[] args){
//         A obj = new B();
//         obj.show(5);
//     }//Varargs
// }

// class A{A() {System.out.println("A");}}
// class B extends A{
//     B(){
//         this(5);
//         System.out.println("B");
//     }
//     B(int x){}
// }
// public class sample1{
//     public static void main(String[] args){
//         new B();
//     }
// } //A
//   //B



