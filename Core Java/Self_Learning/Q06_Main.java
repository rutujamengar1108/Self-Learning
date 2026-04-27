package com.Self_Learning;

public class Q06_Main {
	    public static void main(String args[]) {

	        Q06_Person p = new Q06_Employee();

	        Q06_Employee e = (Q06_Employee) p;

	        e.setEmpId(101);
	        e.setName("Rutuja");

	        p.display(); 
	        
	        e.work();
	        e.work("Project");
	    }
	}
