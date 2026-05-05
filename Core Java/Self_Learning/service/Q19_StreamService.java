package com.Self_Learning.service;

import java.util.*;
import java.util.stream.*;

public class Q19_StreamService {

    public void processData() {

        List<Integer> list = Arrays.asList(10, 20, 30, 40, 50);

        System.out.println("Map:");
        list.stream()
            .map(x -> x * 2)
            .forEach(System.out::println);

        System.out.println("\nFilter:");
        list.stream()
            .filter(x -> x > 25)
            .forEach(System.out::println);

        System.out.println("\nCount:");
        long count = list.stream()
                         .filter(x -> x > 20)
                         .count();
        System.out.println(count);

        System.out.println("\nReduce:");
        int sum = list.stream()
                      .reduce(0, (a, b) -> a + b);
        System.out.println(sum);

        System.out.println("\nSort:");
        list.stream()
            .sorted()
            .forEach(System.out::println);
    }
}