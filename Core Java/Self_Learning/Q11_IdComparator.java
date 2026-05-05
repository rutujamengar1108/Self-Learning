package com.Self_Learning;

import java.util.Comparator;

public class Q11_IdComparator implements Comparator<Q11_Employee> {

    public int compare(Q11_Employee e1, Q11_Employee e2) {
        return e1.getId() - e2.getId();   // sort by id
    }
}