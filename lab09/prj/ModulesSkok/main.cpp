#include"ModulesSkok.h"
#include<cmath>
#include<locale>
#include<iostream>
#include<string>

using namespace std;

int s_calculation(int x,int y,int z)
{
    int S = sqrt(z)-(sqrt(1+x)-3*cos(x))/(pow(x,2)+sin(M_PI*x));
    return S;
}
string pow_wind(double speed_wind)
{
    string str;
    setlocale(LC_ALL,"ukr");
    if(speed_wind<0)
    {
        str = "Ви ввели невірне число";
    }
    else
    {
    if(speed_wind<0.3)
        str = "Бал бофорта = 0";
    else if(speed_wind>=0.3&&speed_wind<=1.5)
        str = "Бал бофорта = 1";
    else if(speed_wind>=1.6&&speed_wind<=3.3)
        str = "Бал бофорта = 2";
    else if(speed_wind>=3.4&&speed_wind<=5.4)
        str = "Бал бофорта = 3";
    else if(speed_wind>=5.5&&speed_wind<=7.9)
        str = "Бал бофорта = 4";
    else if(speed_wind>=8.0&&speed_wind<=10.7)
        str = "Бал бофорта = 5";
    else if(speed_wind>=10.8&&speed_wind<=13.8)
        str = "Бал бофорта = 6";
    else if(speed_wind>=13.9&&speed_wind<=17.1)
        str = "Бал бофорта = 7";
    else if(speed_wind>=17.2&&speed_wind<=20.7)
        str = "Бал бофорта = 8";
    else if(speed_wind>=20.8&&speed_wind<=24.4)
        str = "Бал бофорта = 9";
    else if(speed_wind>=24.5&&speed_wind<=28.4)
        str = "Бал бофорта = 10";
    else if(speed_wind>=28.5&&speed_wind<=32.6)
        str = "Бал бофорта = 11";
    else if(speed_wind>=32.7)
        str = "Бал бофорта = 12";
    }
    return str;
}
string size_helmet(int size_h)
{
    string helm_size;
    setlocale(LC_ALL,"ukr");
    if(size_h<53||size_h>62)
    {
        helm_size = "Ви ввели невірне число";
    }
    else
    {
    if (size_h == 53||size_h == 54)
        helm_size = "Розмір вашого шолома XS";
    else if (size_h == 55 || size_h == 56)
        helm_size = "Розмір вашого шолома S";
    else if (size_h == 57 || size_h == 58)
        helm_size = "Розмір вашого шолома M";
    else if (size_h == 59 || size_h == 60)
        helm_size = "Розмір вашого шолома L";
    else if (size_h == 61 || size_h == 62)
        helm_size = "Розмір вашого шолома XL";
    }
    return helm_size;
}
int bit_15(int my_number)
{
    setlocale(LC_ALL,"ukr");
    int number_0 = 0;
    int number_1 = 0;
    int number = 0;
    if(my_number>=0&&my_number<=10008000)
    {
    if(my_number>0)
    {
    int bin_system[25];
    for(int i = 0;;i++)
    {
        if(my_number<1)
        {
            bin_system[i]=1;
            break;
        }
        else
        {
            bin_system[i] = my_number%2;
            my_number/=2;
        }
        if(bin_system[i]==0)
            number_0++;
        else if(bin_system[i]==1)
           number_1++;
    }
    int t = 0;
    int sum = number_0+number_1;
    for(int i = sum-1;i>=0;i--)
    {
        t++;
        if(t == 15)
        number = bin_system[i];
    }
    }
    else if(my_number == 0)
    {
        number = 0;
        number_0 = 1;
    }
    if(number == 0)
        cout<<"0  =  "<<number_0;
    else if(number == 1)
        cout<<"1  =  "<<number_1;
    }
    else
    {
        cout<<"Ви ввели невірне число";
    }
}
