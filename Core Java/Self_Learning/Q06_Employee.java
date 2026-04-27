package com.Self_Learning;

public class Q06_Employee extends Q06_Person  {
	    private int empId;
	    private String name;

	    public void setEmpId(int empId) {
	        this.empId = empId;
	    }

	    public void setName(String name) {
	        this.name = name;
	    }

	    public int getEmpId() {
	        return empId;
	    }

	    public String getName() {
	        return name;
	    }

	    void display() {
	        System.out.println("Employee ID: " + empId);
	        System.out.println("Name: " + name);
	    }
	    public void work() {
	        System.out.println("Employee is working");
	    }

	    public void work(String task) {
	        System.out.println("Employee is working on " + task);
	    }
	}
