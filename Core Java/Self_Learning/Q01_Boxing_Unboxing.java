package com.Self_Learning;

public class Q01_Boxing_Unboxing {
     public static void main(String args[]) {
    	 int num=10;
    	 Integer obj=Integer.valueOf(num);
    	 System.out.println("Boxing: "+obj);
    
    	 int num2=obj.intValue();
    	 System.out.println("Unboxing: "+num2);
     }
}
