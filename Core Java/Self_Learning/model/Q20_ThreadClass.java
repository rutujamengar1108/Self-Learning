package com.Self_Learning.model;

public class Q20_ThreadClass extends Thread {

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Thread Class: " + i);
        }
    }
}