package com.Self_Learning;

public class Q02_WraperMethods {

public static void main(String args[]) {
	int a=50;
	Integer obj=Integer.valueOf(a);
	System.out.println("valueOf(): "+obj);
	
	String s="100";
	int num=Integer.parseInt(s);
	System.out.println("parseInt(): "+num);
	
	Integer b=200;
	String str=b.toString();
	System.out.println("toString(): "+str);
	
	Integer x=10;
	Integer y=20;
	System.out.println("compareTo(): "+x.compareTo(y));
	
	Integer p=30;
	Integer q=30;
	System.out.println("equals(): "+p.equals(q));
	
	System.out.println("max(): "+Integer.max(5,9));
	System.out.println("min(): "+Integer.min(5,9));
	
	Integer z=40;
	double d=z.doubleValue();
	System.out.println("doubleValue(): "+d);
	
	char ch='a';
	System.out.println("isletter(): "+Character.isLetter(ch));
	System.out.println("toUpperCase(): "+Character.toUpperCase(ch));
}
}
