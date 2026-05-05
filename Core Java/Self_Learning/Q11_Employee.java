package com.Self_Learning;

public class Q11_Employee implements Comparable<Q11_Employee> {

    private int id;
    private String name;
    private double salary;

    public Q11_Employee(int id, String name, double salary) {
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

    public int compareTo(Q11_Employee e) {
        return Double.compare(this.salary, e.salary);
    }

    public String toString() {
        return id + " " + name + " " + salary;
    }
}