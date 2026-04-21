#include<iostream>
using namespace std;


int strLength(const char *str) {
    int count = 0;
    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}


void strCopy(const char *src, char *dest) {
    while(*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}


void strConcat(char *str1, const char *str2) {
    while(*str1 != '\0') {
        str1++;
    }
    while(*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}


int strCompare(const char *str1, const char *str2) {
    while(*str1 != '\0' && *str2 != '\0') {
        if(*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {

    char *str1 = new char[50];
    char *str2 = new char[50];
    char *str3 = new char[50];

    cout << "Enter String 1: ";
    cin.getline(str1, 50);

    cout << "Enter String 2: ";
    cin.getline(str2, 50);

   
    cout << "\nLength of String 1: " << strLength(str1) << endl;

  
    strCopy(str1, str3);
    cout << "Copied String: " << str3 << endl;


    strConcat(str1, str2);
    cout << "Concatenated String: " << str1 << endl;

  
    int result = strCompare(str1, str2);

    if(result == 0)
        cout << "Strings are Equal\n";
    else if(result > 0)
        cout << "String 1 is Greater\n";
    else
        cout << "String 2 is Greater\n";

 
    delete[] str1;
    delete[] str2;
    delete[] str3;

    return 0;
}