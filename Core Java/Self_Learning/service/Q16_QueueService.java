package com.Self_Learning.service;

import java.util.LinkedList;
import java.util.Queue;

public class Q16_QueueService {

    Queue<Integer> queue = new LinkedList<>();

    public void enqueue(int value) {
        queue.add(value);
        System.out.println(value + " inserted");
    }

    public void dequeue() {
        if (queue.isEmpty()) {
            System.out.println("Queue is empty");
        } else {
            System.out.println(queue.poll() + " removed");
        }
    }

    public void peek() {
        if (queue.isEmpty()) {
            System.out.println("Queue is empty");
        } else {
            System.out.println("Front: " + queue.peek());
        }
    }

    public void display() {
        System.out.println("Queue elements: " + queue);
    }
}