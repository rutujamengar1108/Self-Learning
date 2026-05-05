package com.Self_Learning.model;

public class Q17_Employee {

    private int id;
    private String name;

    public Q17_Employee(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public int hashCode() {
        return id;
    }

    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Q17_Employee e = (Q17_Employee) obj;
        return this.id == e.id;
    }

    public String toString() {
        return id + " " + name;
    }
}