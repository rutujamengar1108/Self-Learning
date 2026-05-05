package com.Self_Learning.ui;

import java.util.Scanner;
import com.Self_Learning.service.Q16_QueueService;

public class Q16_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Q16_QueueService service = new Q16_QueueService();

        int choice;

        do {
            System.out.println("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter value: ");
                    service.enqueue(sc.nextInt());
                    break;

                case 2:
                    service.dequeue();
                    break;

                case 3:
                    service.peek();
                    break;

                case 4:
                    service.display();
                    break;

                case 5:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 5);

        sc.close();
    }
}