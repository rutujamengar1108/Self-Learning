package com.Self_Learning;

class Animal2 {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog2 extends Animal2 {
    void bark() {
        System.out.println("Dog is barking");
    }
}

class Cat2 extends Animal2 {
    void meow() {
        System.out.println("Cat is meowing");
    }
}

public class Q07_HierarchicalInheritance {
    public static void main(String[] args) {
        Dog2 d = new Dog2();
        Cat2 c = new Cat2();

        d.eat();
        d.bark();

        c.eat();
        c.meow();
    }
}