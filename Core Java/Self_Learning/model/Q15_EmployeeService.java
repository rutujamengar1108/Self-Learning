package com.Self_Learning.service;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import com.Self_Learning.model.Q15_Employee;

public class Q15_EmployeeService {

    ArrayList<Q15_Employee> list = new ArrayList<>();

    public void addEmployee(Q15_Employee e) {
        list.add(e);
    }
    
    public void sortBySalary() {
        Collections.sort(list);
        System.out.println("\nSorted by Salary:");
        display();
    }

    public void sortById() {
        Collections.sort(list, new Comparator<Q15_Employee>() {
            public int compare(Q15_Employee e1, Q15_Employee e2) {
                return e1.getId() - e2.getId();
            }
        });

        System.out.println("\nSorted by ID:");
        display();
    }

    public void display() {
        for (Q15_Employee e : list) {
            System.out.println(e);
        }
    }
}