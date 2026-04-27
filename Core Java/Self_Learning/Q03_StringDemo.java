package com.Self_Learning;

public class Q03_StringDemo {
	    public static void main(String args[]) {

	        String str = "  Hello Java World  ";      
	        System.out.println("Length: " + str.length());
	       
	        System.out.println("Trim: " + str.trim());
	        
	        System.out.println("Uppercase: " + str.toUpperCase());
	       
	        System.out.println("Lowercase: " + str.toLowerCase());
	       
	        System.out.println("charAt(2): " + str.charAt(2));
	        
	        System.out.println("Substring (6,10): " + str.substring(6, 10));
	        
	        String s2 = "Hello Java World";
	        System.out.println("Equals: " + str.trim().equals(s2));
       
	        String s3 = "hello java world";
	        System.out.println("Equals Ignore Case: " + s2.equalsIgnoreCase(s3));
       
	        System.out.println("Contains 'Java': " + str.contains("Java"));

	        System.out.println("Replace: " + str.replace("Java", "C++"));

	        System.out.println("IndexOf 'Java': " + str.indexOf("Java"));

	        System.out.println("StartsWith 'Hello': " + str.trim().startsWith("Hello"));
	        System.out.println("EndsWith 'World': " + str.trim().endsWith("World"));

	        String newStr = s2.concat(" Programming");
	        System.out.println("Concat: " + newStr);
	        
	        String[] words = s2.split(" ");
	        System.out.println("Split words:");
	        for(String word : words) {
	            System.out.println(word);
	        }
	    }
	}
