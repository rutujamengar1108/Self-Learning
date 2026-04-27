package com.Self_Learning;

interface A {
    void showA();
}

interface B {
    void showB();
}

class Demo implements A, B {
    public void showA() {
        System.out.println("From A");
    }

    public void showB() {
        System.out.println("From B");
    }
}

public class Q07_MultipleInheritance {
    public static void main(String[] args) {
        Demo d = new Demo();
        d.showA();
        d.showB();
    }
}