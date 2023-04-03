package Lab10;
import Lab10.geometry.Circle;

public class Demo {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.setRadius(5);
        System.out.println("Radius of circle: " + c.getRadius());
        System.out.println("Area of circle: " + c.area());
        System.out.println("Perimeter of circle: " + c.perimeter());
    }
}