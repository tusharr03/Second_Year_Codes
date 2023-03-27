import java.util.*;

interface Motor
{
    int capacity=200;
    void run();
    void consume();
}

class washing_machine implements Motor
{
    public void run()
    {
        System.out.println("Washing machine is running.");
    }
    public void consume()
    {
        System.out.println("Washing machine is consuming power.");
    }
}

public class Lab_09_q1
{
    public static void main(String[] args)
    {
        washing_machine w1=new washing_machine();
        w1.consume();
        w1.run();
    }
}
