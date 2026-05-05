package com.Self_Learning;

import java.util.ArrayList;
import java.util.Collections;

public class Q10_WrapperList {

    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<>();

        list.add(10);
        list.add(5);
        list.add(20);
        list.add(15);

        System.out.println("After Insertion: " + list);

        list.remove(Integer.valueOf(5));
        System.out.println("After Deletion: " + list);
        
        if (list.contains(20)) {
            System.out.println("20 found in list");
        } else {
            System.out.println("20 not found");
        }

        System.out.println("Iterating list:");
        for (Integer i : list) {
            System.out.println(i);
        }

        Collections.sort(list);
        System.out.println("After Sorting: " + list);
    }
}