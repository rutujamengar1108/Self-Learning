package com.Self_Learning.ui;

import java.util.Scanner;
import com.Self_Learning.service.Q14_WrapperService;

public class Q14_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Q14_WrapperService service = new Q14_WrapperService();

        int choice;

        do {
            System.out.println("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Sort\n6.Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter value: ");
                    service.insert(sc.nextInt());
                    break;

                case 2:
                    System.out.print("Enter value: ");
                    service.delete(sc.nextInt());
                    break;

                case 3:
                    System.out.print("Enter value: ");
                    service.search(sc.nextInt());
                    break;

                case 4:
                    service.display();
                    break;

                case 5:
                    service.sortList();
                    break;

                case 6:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 6);

        sc.close();
    }
}