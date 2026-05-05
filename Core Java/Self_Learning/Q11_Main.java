package com.Self_Learning;

import java.util.ArrayList;
import java.util.Collections;

public class Q11_Main {

    public static void main(String args[]) {

        ArrayList<Q11_Employee> list = new ArrayList<>();

        list.add(new Q11_Employee(102, "Rutuja", 70000));
        list.add(new Q11_Employee(101, "Shruti", 40000));
        list.add(new Q11_Employee(103, "Pratibha", 60000));

        Collections.sort(list);
        System.out.println("Sorted by Salary:");
        for (Q11_Employee e : list) {
            System.out.println(e);
        }
        Collections.sort(list, new Q11_IdComparator());
        System.out.println("\nSorted by ID:");
        for (Q11_Employee e : list) {
            System.out.println(e);
        }
    }
}