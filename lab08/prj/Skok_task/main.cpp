#include<iostream>
#include<math.h>
#include<ModulesSkok.h>
#include<iomanip>
#include<clocale>
#include<stdlib.h>

using namespace std;

void copyright()
{
    system ("chcp 1251");
    system("cls");
    setlocale(LC_ALL,"ukr");
    cout<<"��������� �������� ���� ������ �\n";
}
double mathfunc(double a,double b)
{
        if(a+7<fabs(b-5))
            cout<<"��������� ���i����� ������ � ��������� ������i  = "<<true;
        else
            cout<<"��������� ���i����� ������ � ��������� ������i  = "<< false;
        cout<<"\n";
}
int mathhex(int x,int y, int z)
{
    int S = s_calculation(x,y,z);
    cout<<"����� � ��������� ������ ��������:\n";
    cout<<"x = "<<dec<<x<<"\n";
    cout<<"y = "<<dec<<y<<"\n";
    cout<<"z = "<<dec<<z<<"\n";
    cout<<"S = "<<dec<<S<<"\n";
    cout<<"����� � �������������� ������i:\n";
    cout<<"x = "<<hex<<x<<"\n";
    cout<<"y = "<<hex<<y<<"\n";
    cout<<"z = "<<hex<<z<<"\n";
    cout<<"S = "<<hex<<S<<"\n";
}

int main()
{
    setlocale(LC_ALL,"ukr");
    double ab,ba;
    cout<<"����i�� a\n";
    cin>>ab; //a
    cout<<"����i�� b\n";
    cin>>ba;//b
    int j,k,l;
    cout<<"����i�� x\n";
    cin>>j;//x
    cout<<"����i�� y\n";
    cin>>k;//y
    cout<<"����i�� z\n";
    cin>>l;//z
    copyright();
    mathfunc(ab,ba);
    mathhex(j,k,l);
    return 0;
}
