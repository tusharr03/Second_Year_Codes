package Lab8;

public class Lab_08_Q3 {
    public static void main(String[] args) {
        Kiitians ob = new Kiitians(21051953, 2104228734);
        ob.course();
    }
}

abstract class Student {
    int rollNo, regNo;

    Student(int rollNo, int regNo) {
        this.regNo = regNo;
        this.rollNo = rollNo;
    }

    abstract void course();
}

class Kiitians extends Student {
    Kiitians(int rollNo, int regNo) {
        super(rollNo, regNo);
    }

    void course() {
        System.out.println("Roll No : "+ rollNo +"\nRegd No : "+regNo);
    }
}
