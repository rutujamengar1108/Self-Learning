#include<iostream>
using namespace std;


class Date {
private:
    int d, m, y;

public:
    void read() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> d >> m >> y;
    }

    void print() {
        cout << d << "/" << m << "/" << y << endl;
    }

 
    Date add(int days) {
        Date temp;
        temp.d = d + days;
        temp.m = m;
        temp.y = y;

        if(temp.d > 30) {
            temp.d -= 30;
            temp.m++;
        }
        return temp;
    }

    
    Date sub(int days) {
        Date temp;
        temp.d = d - days;
        temp.m = m;
        temp.y = y;

        if(temp.d <= 0) {
            temp.d += 30;
            temp.m--;
        }
        return temp;
    }
};

class Time {
private:
    int h, m, s;

public:
    void read() {
        cout << "Enter time (hh mm ss): ";
        cin >> h >> m >> s;
    }

    void print() {
        cout << h << ":" << m << ":" << s << endl;
    }

 
    Time add(int sec) {
        Time temp;
        temp.h = h;
        temp.m = m;
        temp.s = s + sec;

        if(temp.s >= 60) {
            temp.s -= 60;
            temp.m++;
        }
        if(temp.m >= 60) {
            temp.m -= 60;
            temp.h++;
        }
        return temp;
    }

   
    Time sub(int sec) {
        Time temp;
        temp.h = h;
        temp.m = m;
        temp.s = s - sec;

        if(temp.s < 0) {
            temp.s += 60;
            temp.m--;
        }
        if(temp.m < 0) {
            temp.m += 60;
            temp.h--;
        }
        return temp;
    }
};


int main() {

    Date d1, d2;
    Time t1, t2;

 
    d1.read();
    cout << "Original Date: ";
    d1.print();

    d2 = d1.add(5);  
    cout << "After Adding 5 days: ";
    d2.print();

    d2 = d1.sub(3);
    cout << "After Subtracting 3 days: ";
    d2.print();

    cout << endl;


    t1.read();
    cout << "Original Time: ";
    t1.print();

    t2 = t1.add(70);
    cout << "After Adding 70 seconds: ";
    t2.print();

    t2 = t1.sub(40);
    cout << "After Subtracting 40 seconds: ";
    t2.print();

    return 0;
}