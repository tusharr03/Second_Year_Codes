package Lab10;

interface Numbers{
    int process(int x, int y);
}

class Sum implements Numbers{
    public int process(int x, int y){
        return x+y;
    }
}

class Average implements Numbers{
    public int process(int x, int y){
        return (x+y)/2;
    }
}

public class Lab_10_q1{
    public static void main(String []args){
        Sum s1=new Sum();
        Average a1=new Average();
        int a=s1.process(8,10);
        int b=a1.process(8,10);
        System.out.println("The sum process gives output: "+a+" \nand the average proce3ss gives output as: "+b);
    }
}
