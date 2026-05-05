package com.Self_Learning.ui;

import com.Self_Learning.model.Q17_Employee;
import com.Self_Learning.service.Q17_EmployeeService;

public class Q17_Main {

    public static void main(String[] args) {

        Q17_EmployeeService service = new Q17_EmployeeService();

        service.addEmployee(new Q17_Employee(101, "Rutuja"));
        service.addEmployee(new Q17_Employee(102, "Shruti"));
        service.addEmployee(new Q17_Employee(101, "Pratibha"));
        service.addEmployee(new Q17_Employee(103, "Divyani"));
        service.addEmployee(new Q17_Employee(102, "Uma"));

        System.out.println("\nFinal Set:");
        service.display();
    }
}