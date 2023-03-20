package Lab8.general;

public class employee{
    protected int empid;
    private String ename ;
    public double salary;

    public employee(int empid , String ename){
        this.empid = empid ;
        this.ename = ename;
    }

    public void earning(double basic , double da , double hra){
        salary = basic + (0.8)*da + (0.15)*hra;
        System.out.println("Name : " + ename);
        System.out.println("ID : " + empid);
        System.out.println("Salary : " + salary);
    }
}
