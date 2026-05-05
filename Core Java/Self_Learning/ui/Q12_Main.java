package com.Self_Learning.ui;

import com.Self_Learning.service.Q12_StudentService;
import com.Self_Learning.model.*;

public class Q12_Main {

    public static void main(String[] args) {

    	Q12_StudentService service = new Q12_StudentService();
        try {
            service.checkAge(15);
        } catch (Q12_InvalidAgeException e) {
            System.out.println("Checked Exception: " + e.getMessage());
        }
        try {
            service.checkMarks(-10);
        } catch (Q12_InvalidMarksException e) {
            System.out.println("Unchecked Exception: " + e.getMessage());
        }
    }
}