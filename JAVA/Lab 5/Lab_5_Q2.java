import java.util.*;
public class Lab_5_Q2 
{
    void subtract(int x,int y)
    {
        int s=x-y;
        System.out.println("Diff. = "+s);
    }
    void subtract(double x,int y)
    {
        double s=x-y;
        System.out.println("Diff. = "+s);
    }
    void subtract(int x,double y)
    {
        double s=x-y;
        System.out.println("Diff. = "+s);
    }
    void subtract(double x,double y)
    {
        double s=x-y;
        System.out.println("Diff. = "+s);
    }
    public static void main(String[] args) {
        Lab_5_Q2 ob= new Lab_5_Q2();
        ob.subtract(6,5);
        ob.subtract(6.5,5);
        ob.subtract(8, 0.9);
        ob.subtract(5.5,-7.9);
    }
}
    
