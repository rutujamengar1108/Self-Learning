package com.demo.test;
import com.demo.arrays.My2DArray;

public class TestMy2DArray {

	public static void main(String[] args) {
		My2DArray ob=new My2DArray();
		ob.acceptData();
		ob.displayData();
		System.out.println(ob.isIdentity());
		System.out.println(ob.isSymmetric());
		ob.rowRotate(true,2);
		ob.displayData();
		ob.displayData();
		ob.displayData();
	}

}
