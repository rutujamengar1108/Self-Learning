package com.Self_Learning.ui;

import com.Self_Learning.service.Q20_ThreadService;

public class Q20_Main {

    public static void main(String[] args) {

        Q20_ThreadService service = new Q20_ThreadService();
        service.executeThreads();
    }
}