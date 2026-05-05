package com.Self_Learning.model;

public class Q15_Employee implements Comparable<Q15_Employee> {

    private int id;
    private String name;
    private double salary;

    public Q15_Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    public int compareTo(Q15_Employee e) {
        return Double.compare(this.salary, e.salary);
    }

    public String toString() {
        return id + " " + name + " " + salary;
    }
}