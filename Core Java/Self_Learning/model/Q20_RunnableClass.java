package com.Self_Learning.model;

public class Q20_RunnableClass implements Runnable {

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Runnable: " + i);
        }
    }
}