package com.Self_Learning;

interface MyInterface {
    void show();
}

public class Q08_Interface_anonymous {

    public static void main(String[] args) {

        MyInterface obj1 = new MyInterface() {
            public void show() {
                System.out.println("Using Anonymous Class");
            }
        };
        obj1.show();

        MyInterface obj2 = () -> {
            System.out.println("Using Lambda Expression");
        };
        obj2.show();
    }
}