package com.Self_Learning.service;

import java.util.ArrayList;
import java.util.Collections;

public class Q14_WrapperService {

    ArrayList<Integer> list = new ArrayList<>();

    public void insert(int value) {
        list.add(value);
        System.out.println(value + " inserted");
    }

    public void delete(int value) {
        if (list.remove(Integer.valueOf(value))) {
            System.out.println(value + " deleted");
        } else {
            System.out.println(value + " not found");
        }
    }
    
    public void search(int value) {
        if (list.contains(value)) {
            System.out.println(value + " found in list");
        } else {
            System.out.println(value + " not found");
        }
    }

    public void display() {
        System.out.println("List elements:");
        for (Integer i : list) {
            System.out.println(i);
        }
    }

    public void sortList() {
        Collections.sort(list);
        System.out.println("List sorted");
    }
}