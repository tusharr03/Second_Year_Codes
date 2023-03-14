package Learning;
import java.util.*;

public class grade_cal {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your marks(out of 100): ");
        int marks=sc.nextInt();
        if(marks>=90)
        {
            System.out.println("Grade 0");
        }
        else if(marks>=80 && marks<90)
        {
            System.out.println("Grade E");
        }
        else if(marks>=70 && marks<80)
        {
            System.out.println("Grade A");
        }
        else if(marks>=60 && marks<70)
        {
            System.out.println("Grade B");
        }
        else if(marks>=50 && marks<60)
        {
            System.out.println("Grade C");
        }    
        else if(marks>=40 && marks<50)
        {
            System.out.println("Grade E");
        }
        else
        {
            System.out.println("Grade F");
        }
        sc.close();
    }
    
}
