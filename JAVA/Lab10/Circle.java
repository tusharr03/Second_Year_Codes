package Lab10.geometry;

public class Circle {
    private double radius;

    public Circle() {
        this.radius = 0;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return this.radius;
    }

    public double area() {
        return 3.14159 * this.radius * this.radius;
    }

    public double perimeter() {
        return 2 * 3.14159 * this.radius;
    }
}