package com.Self_Learning;

import java.time.LocalDate;
import java.util.Scanner;

public class Q09_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first date (dd-MM-yyyy): ");
        String d1 = sc.nextLine();

        System.out.print("Enter second date (dd-MM-yyyy): ");
        String d2 = sc.nextLine();

        LocalDate date1 = Q09_DateManipulator.stringToDate(d1);
        LocalDate date2 = Q09_DateManipulator.stringToDate(d2);

        System.out.println("Date1: " + Q09_DateManipulator.dateToString(date1));
        System.out.println("Date2: " + Q09_DateManipulator.dateToString(date2));

        long days = Q09_DateManipulator.daysBetween(date1, date2);
        System.out.println("Days between: " + days);

        sc.close();
    }
}