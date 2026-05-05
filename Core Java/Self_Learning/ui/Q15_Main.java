package com.Self_Learning.ui;

import com.Self_Learning.model.Q15_Employee;
import com.Self_Learning.service.Q15_EmployeeService;

public class Q15_Main {

    public static void main(String[] args) {

        Q15_EmployeeService service = new Q15_EmployeeService();

        service.addEmployee(new Q15_Employee(102, "Rutuja", 50000));
        service.addEmployee(new Q15_Employee(101, "Shruti", 45000));
        service.addEmployee(new Q15_Employee(105, "Pratibha", 60000));
        service.addEmployee(new Q15_Employee(103, "Divyani", 48000));
        service.addEmployee(new Q15_Employee(104, "Uma", 52000));
        service.addEmployee(new Q15_Employee(106, "Prashant", 55000));

        service.sortBySalary();
        service.sortById();
    }
}