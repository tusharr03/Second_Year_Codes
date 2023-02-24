public class Q2 {
    static int count = 0;

    Q2(){
        count++;
    }
    public static void main(String args[]){

        Q2 ob1 = new Q2();
        Q2 ob2 = new Q2();
        System.out.println("Count : " + count);
    }
}
