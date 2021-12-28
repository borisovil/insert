// ConsoleApplication41.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    char  buf[1024];
    char tbuf[1024];
    char* atbuf = tbuf;
    char masc[] = ".[]{}()";
    std::cin >> buf;
    for (int i = 0; buf[i] != '\0'; i++) {
        for (int j = 0; j < 7; j++) {
            if (buf[i] == masc[j]) {
                *atbuf = '\\';
                atbuf++;
                break;
            }
        }
        *atbuf = buf[i];
        atbuf++;
    }
    *atbuf = '\0';
    std::cout <<tbuf <<"\n";
}

