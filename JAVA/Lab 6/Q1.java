public class Q1{
    public static void main(String[] args){
        int num[] = new int[10];
        for(int i=0 ; i<10; i++)
            num[i] = Integer.parseInt(args[i]);

        for(int i=0 ; i<10; i++){
            if(num[i]%2 == 0)
                System.out.println(num[i] + " " + "is Even");
            else
                System.out.println(num[i] + " " + "is Odd");
        }
    }
}
