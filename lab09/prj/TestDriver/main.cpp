#include <iostream>
#include<ModulesSkok.h>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
    cout<<"TEST 9_1\n";
    string t1 = pow_wind(33);
    if(t1 == "Бал бофорта = 12")
    {
    cout<<"test 1 correct\n";
    }
    string t2 = pow_wind(0);
    if(t2 == "Бал бофорта = 0")
    {
    cout<<"test 2 correct\n";
    }
    string t3 = pow_wind(3);
    if(t3 == "Бал бофорта = 2")
    {
    cout<<"test 3 correct\n";
    }
    string t4 = pow_wind(4);
    if(t4 == "Бал бофорта = 3")
    {
    cout<<"test 4 correct\n";
    }
    string t5 = pow_wind(10);
    if(t5 == "Бал бофорта = 5")
    {
    cout<<"test 5 correct\n";
    }
    string t6 = pow_wind(15);
    if(t6 == "Бал бофорта = 7")
    {
    cout<<"test 6 correct\n";
    }
    string t7 = pow_wind(21.5);
    if(t7 == "Бал бофорта = 9")
    {
    cout<<"test 7 correct\n";
    }
    string t8 = pow_wind(32);
    if(t8 == "Бал бофорта = 11")
    {
    cout<<"test 8 correct\n";
    }
    string t9 = pow_wind(-1);
    if(t9 == "Ви ввели невірне число")
    {
    cout<<"test 9 correct\n";
    }
    string t10 = pow_wind(100);
    if(t10 == "Бал бофорта = 12")
    {
    cout<<"test 10 correct\n";
    }
    system("PAUSE");
    system("cls");
    cout<<"TEST 9_2\n";
    string test1 = size_helmet(53);
    if(test1 == "Розмір вашого шолома XS")
    {
    cout<<"test 1 correct\n";
    }
    string test2 = size_helmet(55);
    if(test2 == "Розмір вашого шолома S")
    {
    cout<<"test 2 correct\n";
    }
    string test3 = size_helmet(57);
    if(test3 == "Розмір вашого шолома M")
    {
    cout<<"test 3 correct\n";
    }
    string test4 = size_helmet(63);
    if(test4 == "Ви ввели невірне число")
    {
    cout<<"test 4 correct\n";
    }
    string test5 = size_helmet(60);
    if(test5 == "Розмір вашого шолома L")
    {
    cout<<"test 5 correct\n";
    }
    string test6 = size_helmet(62);
    if(test6 == "Розмір вашого шолома XL")
    {
    cout<<"test 6 correct\n";
    }
    string test7 = size_helmet(0);
    if(test7 == "Ви ввели невірне число")
    {
        cout<<"test 7 correct\n";
    }
    system("PAUSE");
    system("cls");
    cout<<"TEST 9_3\n";
    bit_15(-1);
    cout<<"\n";
    bit_15(0);
    cout<<"\n";
    bit_15(1);
    cout<<"\n";
    bit_15(222222);
    cout<<"\n";
    bit_15(54321);
    cout<<"\n";
    bit_15(10008000);
    cout<<"\n";
    bit_15(10008001);
    return 0;
}
