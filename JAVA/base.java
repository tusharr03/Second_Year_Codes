package Lab7;

public class base {
    class Base{
        int x;
        Base(int x){
            this.x=x;
        }
    }
    class Derived extends Base{
        /**
         * 
         */
        Derived(){
            super(4);
        }
        void display(){
            System.out.println("The value of x is: "+x);
        }
    }
    public class LAB_7_6 {
        public static void main(String[] args) {
            Derived d = new Derived();
            d.display();
        }
    }
    
}
