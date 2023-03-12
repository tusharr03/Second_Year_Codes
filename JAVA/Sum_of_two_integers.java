package Learning;
import java.util.*;

public class Sum_of_two_integers {
    public static void main(String args[]){
        
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter Number 1 : ");
        int a=sc.nextInt();
        System.out.println("Enter Number 2 : ");
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("The sum of num 1 and num 2 is : ");
        System.out.println(sum);
        sc.close();
    }
    
}
