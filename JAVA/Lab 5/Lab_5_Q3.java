import java.util.*;
public class Lab_5_Q3
{

        void show_area(double r)
        {        
            double area = 3.14*r*r;
            System.out.println("Area of Circle :"+area);
        }
    
        void show_area(int l,int b)
        {
            
            double area =l*b;
            System.out.println("Area of Rectangle :"+area);
            
        }
        void show_area(double b,double h)
        {
            double area = 0.5*b*h;
            System.out.println("Area of Triangle :"+area);
    
        }
    public static void main(String[] args) {
        Lab_5_Q3 ob=new Lab_5_Q3();
        ob.show_area(7, 8);
        ob.show_area(8.9);
        ob.show_area(7.8,9.8);
    }
}
