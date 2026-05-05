package com.Self_Learning.ui;

import java.time.LocalDate;
import java.util.Scanner;
import com.Self_Learning.service.Q13_DateManipulator;

public class Q13_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Q13_DateManipulator dm = new Q13_DateManipulator();

        System.out.print("Enter first date (dd-MM-yyyy): ");
        String d1 = sc.nextLine();

        System.out.print("Enter second date (dd-MM-yyyy): ");
        String d2 = sc.nextLine();

        LocalDate date1 = dm.stringToDate(d1);
        LocalDate date2 = dm.stringToDate(d2);

        System.out.println("Date1: " + dm.dateToString(date1));
        System.out.println("Date2: " + dm.dateToString(date2));

        long days = dm.daysBetween(date1, date2);
        System.out.println("Days between: " + days);

        sc.close();
    }
}