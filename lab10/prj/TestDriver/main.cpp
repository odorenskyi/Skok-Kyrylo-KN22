#include <iostream>
#include<string>
#include<ModulesSkok.h>
#include<clocale>
#include<fstream>
using namespace std;

int main()
{
    double numb_x,numb_y,numb_z;
    int numb_b;
    setlocale(LC_ALL,"ukr");
    write_f("text.txt","Lab10.txt");
    system("PAUSE");
    system("cls");
    write_f("text.txt","Lab10.txt");
    system("PAUSE");
    system("cls");
    write_f("text.txt","Lab10.txt");
    system("PAUSE");
    system("cls");
    write_f("txt.txt","Lab10.txt");
    system("PAUSE");
    system("cls");
    append_f("");
    system("PAUSE");
    system("cls");
    append_f("Lab10.txt");
    system("PAUSE");
    system("cls");
    append_f("Lab10");
    system("PAUSE");
    system("cls");
    append_f("Lab10.txt");
    system("PAUSE");
    system("cls");
    number_f("numbers.txt",10,5,25,10);
    system("PAUSE");
    system("cls");
    number_f("numbers.txt",43,32,23,5);
    system("PAUSE");
    system("cls");
    number_f("numbers.txt",130,53,245,1050);
    system("PAUSE");
    system("cls");
    number_f("numbers.txt",123,54,245,180);
    system("PAUSE");
    system("cls");
    return 0;
}
