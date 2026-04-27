package com.Self_Learning;

public class Q04_StringComparison {
	
	    public static void main(String args[]) {

	        String str = "Hello";
	        str.concat(" World");   
	        System.out.println("String: " + str);
	     
	        StringBuffer sbf = new StringBuffer("Hello");
	        sbf.append(" World");   
	        System.out.println("StringBuffer: " + sbf);

	        StringBuilder sbd = new StringBuilder("Hello");
	        sbd.append(" World");
	        System.out.println("StringBuilder: " + sbd);

	        sbf.insert(5, " Java");
	        System.out.println("Insert (Buffer): " + sbf);

	        sbf.replace(6, 10, "C++");
	        System.out.println("Replace (Buffer): " + sbf);

	        sbf.delete(6, 9);
	        System.out.println("Delete (Buffer): " + sbf);

	        sbd.reverse();
	        System.out.println("Reverse (Builder): " + sbd);
	    }
	}

