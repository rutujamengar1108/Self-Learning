package com.Self_Learning.service;

import com.Self_Learning.model.Q20_ThreadClass;
import com.Self_Learning.model.Q20_RunnableClass;

public class Q20_ThreadService {

    public void executeThreads() {

        Q20_ThreadClass t1 = new Q20_ThreadClass();

        Thread t2 = new Thread(new Q20_RunnableClass());

        t1.start();
        t2.start();
    }
}