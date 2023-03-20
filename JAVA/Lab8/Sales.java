package Lab8.Marketing;

import Lab8.general.*;
public class Sales extends employee{

    public Sales(int empid , String name){
        super(empid , name);
    }

    public void tallowance(){
        super.earning(1000.0 , 1500.0 , 500.0);
        double allowance = 0.05*(salary);
        System.out.println("The Total Allowance : " + allowance);
    }
}
