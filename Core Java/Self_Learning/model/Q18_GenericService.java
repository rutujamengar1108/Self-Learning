package com.Self_Learning.service;

import java.util.List;

public class Q18_GenericService {

    public void printExtends(List<? extends Object> list) {
        for (Object obj : list) {
            System.out.println(obj);
        }
    }

    public void printSuper(List<? super Integer> list) {
        list.add(100);
        list.add(200);
        for (Object obj : list) {
            System.out.println(obj);
        }
    }

    public void printAny(List<?> list) {
        for (Object obj : list) {
            System.out.println(obj);
        }
    }
}