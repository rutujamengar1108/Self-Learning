package com.Self_Learning.service;

import java.util.HashSet;
import com.Self_Learning.model.Q17_Employee;

public class Q17_EmployeeService {

    HashSet<Q17_Employee> set = new HashSet<>();

    public void addEmployee(Q17_Employee e) {
        if (set.add(e)) {
            System.out.println("Added: " + e);
        } else {
            System.out.println("Duplicate not added: " + e);
        }
    }

    public void display() {
        for (Q17_Employee e : set) {
            System.out.println(e);
        }
    }
}