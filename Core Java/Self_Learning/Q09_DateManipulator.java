package com.Self_Learning;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;

public class Q09_DateManipulator {

    public static LocalDate stringToDate(String dateStr) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        return LocalDate.parse(dateStr, formatter);
    }

    public static String dateToString(LocalDate date) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        return date.format(formatter);
    }

    public static long daysBetween(LocalDate d1, LocalDate d2) {
        return ChronoUnit.DAYS.between(d1, d2);
    }
}