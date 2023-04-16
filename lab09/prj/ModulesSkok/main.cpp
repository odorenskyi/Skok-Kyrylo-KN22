#include"ModulesSkok.h"
#include<cmath>
#include<locale>
#include<iostream>
using namespace std;
    int s_calculation(int x,int y,int z)
{
    int S = sqrt(z)-(sqrt(1+x)-3*cos(x))/(pow(x,2)+sin(M_PI*x));
    return S;
}
double pow_wind(double speed_wind)
{
   setlocale(LC_ALL,"ukr");
    do
    {
    cout<<"Введiть силу вiтру\n";
    cin>>speed_wind;
    }while(speed_wind<0);
    if(speed_wind<0.3)
        cout<<"Бал бофорта = 0\n";
    else if(speed_wind>=0.3&&speed_wind<=1.5)
        cout<<"Бал бофорта = 1\n";
    else if(speed_wind>=1.6&&speed_wind<=3.3)
        cout<<"Бал бофорта = 2\n";
    else if(speed_wind>=3.4&&speed_wind<=5.4)
        cout<<"Бал бофорта = 3\n";
    else if(speed_wind>=5.5&&speed_wind<=7.9)
        cout<<"Бал бофорта = 4\n";
    else if(speed_wind>=8.0&&speed_wind<=10.7)
        cout<<"Бал бофорта = 5\n";
    else if(speed_wind>=10.8&&speed_wind<=13.8)
        cout<<"Бал бофорта = 6\n";
    else if(speed_wind>=13.9&&speed_wind<=17.1)
        cout<<"Бал бофорта = 7\n";
    else if(speed_wind>=17.2&&speed_wind<=20.7)
        cout<<"Бал бофорта = 8\n";
    else if(speed_wind>=20.8&&speed_wind<=24.4)
        cout<<"Бал бофорта = 9\n";
    else if(speed_wind>=24.5&&speed_wind<=28.4)
        cout<<"Бал бофорта = 10\n";
    else if(speed_wind>=28.5&&speed_wind<=32.6)
        cout<<"Бал бофорта = 11\n";
    else if(speed_wind>=32.7)
        cout<<"Бал бофорта = 12\n";
}
int size_helmet(int size_h)
{
    setlocale(LC_ALL,"ukr");
    do
    {
    cout<<"Введiть розмiр голови вiд (53 см до 62 см включно)\n";
    cin>>size_h;
    }while(size_h<53||size_h>62);
    if (size_h == 53||size_h == 54)
        cout<<"Розмір вашого шолома XS\n";
    else if (size_h == 55 || size_h == 56)
        cout<<"Розмір вашого шолома S\n";
    else if (size_h == 57 || size_h == 58)
        cout<<"Розмір вашого шолома M\n";
    else if (size_h == 59 || size_h == 60)
        cout<<"Розмір вашого шолома L\n";
    else if (size_h == 61 || size_h == 62)
        cout<<"Розмір вашого шолома XL\n";
}
int bit_15(int my_number)
{
    setlocale(LC_ALL,"ukr");
    my_number;
    int number_0 = 0;
    int number_1 = 0;
    int number = 0;
    for(;;)
    {
    cout << ("Введiть число вiд (0 до 10008000 включно)\n");
    cin>>my_number;
    if(my_number>=0&&my_number<=10008000)
        break;
    }
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
        cout<<bin_system[i];
        t++;
        if(t == 15)
        number = bin_system[i];
    }
    cout<<"\n";
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
