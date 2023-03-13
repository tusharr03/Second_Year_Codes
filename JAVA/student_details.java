package Learning;
import java.util.*;

public class student_details {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name=sc.nextLine();
        System.out.println("Enter your roll number: ");  
        int roll=sc.nextInt();
        sc.nextLine();
        System.out.println("Enter your section: ");
        String sec=sc.nextLine();
        System.out.println("Enter your branch: ");
        String brn=sc.nextLine();

        System.out.println(name);
        System.out.println(roll);
        System.out.println(sec);
        System.out.println(brn);
        sc.close();        
    }
    
}
