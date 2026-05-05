package com.Self_Learning.ui;

import java.util.*;
import com.Self_Learning.model.Q18_Employee;
import com.Self_Learning.service.Q18_GenericService;

public class Q18_Main {

    public static void main(String[] args) {

        Q18_GenericService service = new Q18_GenericService();

        List<Integer> intList = new ArrayList<>();
        intList.add(10);
        intList.add(20);

        List<String> strList = new ArrayList<>();
        strList.add("Rutuja");
        strList.add("Shruti");

        List<Q18_Employee> empList = new ArrayList<>();
        empList.add(new Q18_Employee("Pratibha"));
        empList.add(new Q18_Employee("Divyani"));

        System.out.println("Using ? extends:");
        service.printExtends(empList);

        System.out.println("\nUsing ? super:");
        service.printSuper(intList);

        System.out.println("\nUsing ?: ");
        service.printAny(strList);
    }
}