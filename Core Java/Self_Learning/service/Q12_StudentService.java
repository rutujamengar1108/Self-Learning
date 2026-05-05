package com.Self_Learning.service;

import com.Self_Learning.model.*;

public class Q12_StudentService {

    public void checkAge(int age) throws Q12_InvalidAgeException {
        if (age < 18) {
            throw new Q12_InvalidAgeException("Age must be 18 or above");
        }
        System.out.println("Valid age");
    }

    public void checkMarks(int marks) {
        if (marks < 0) {
            throw new Q12_InvalidMarksException("Marks cannot be negative");
        }
        System.out.println("Valid marks");
    }
}