package com.Self_Learning;

class Animal1 {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog1 extends Animal1 {
    void bark() {
        System.out.println("Dog is barking");
    }
}

class Puppy1 extends Dog1 {
    void weep() {
        System.out.println("Puppy is weeping");
    }
}

public class Q07_MultilevelInheritance {
    public static void main(String[] args) {
        Puppy1 p = new Puppy1();
        p.eat();
        p.bark();
        p.weep();
    }
}