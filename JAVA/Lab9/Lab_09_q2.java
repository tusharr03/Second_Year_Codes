public class Lab_09_q2 
{
    public static void main(String[] args)
    {
        String s1="Tushar";
        String s2="sharma";
        s1=s1.toLowerCase();
        System.out.println(s1);
        s2=s2.toUpperCase();
        System.out.println(s2);
        StringBuffer sb=new StringBuffer("Tushar");
        sb.reverse();
        System.out.println(sb);
        if(s1.equals(s2))
        {
            System.out.println("Both Strings are equal.");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
        sb.append(s2,0 ,3);
        System.out.println(sb);
        

    }   
}
