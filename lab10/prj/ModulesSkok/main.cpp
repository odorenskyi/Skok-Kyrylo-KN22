#include"ModulesSkok.h"
#include<cmath>
#include<locale>
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
using namespace std;

double s_calculation(double x,double y,double z)
{
    double S;
    double rad_x = x*M_PI/180;
    if(x<0)
    {
        cout<<"�������: x < 0";
    }
    else if(z<0)
    {
        cout<<"�������: z < 0";
    }
    else if(pow(x,2)+sin(M_PI*rad_x) == 0)
    {
        cout<<"�������: ��������� = 0";
    }
    else
    {
    S = sqrt(z)-(sqrt(1+x)-3*cos(rad_x))/(pow(x,2)+sin(M_PI*rad_x));
    }
    return S;
}
string pow_wind(double speed_wind)
{
    string str;
    setlocale(LC_ALL,"ukr");
    if(speed_wind<0)
    {
        str = "�� ����� ������ �����";
    }
    else
    {
    if(speed_wind<0.3)
        str = "��� ������� = 0";
    else if(speed_wind>=0.3&&speed_wind<=1.5)
        str = "��� ������� = 1";
    else if(speed_wind>=1.6&&speed_wind<=3.3)
        str = "��� ������� = 2";
    else if(speed_wind>=3.4&&speed_wind<=5.4)
        str = "��� ������� = 3";
    else if(speed_wind>=5.5&&speed_wind<=7.9)
        str = "��� ������� = 4";
    else if(speed_wind>=8.0&&speed_wind<=10.7)
        str = "��� ������� = 5";
    else if(speed_wind>=10.8&&speed_wind<=13.8)
        str = "��� ������� = 6";
    else if(speed_wind>=13.9&&speed_wind<=17.1)
        str = "��� ������� = 7";
    else if(speed_wind>=17.2&&speed_wind<=20.7)
        str = "��� ������� = 8";
    else if(speed_wind>=20.8&&speed_wind<=24.4)
        str = "��� ������� = 9";
    else if(speed_wind>=24.5&&speed_wind<=28.4)
        str = "��� ������� = 10";
    else if(speed_wind>=28.5&&speed_wind<=32.6)
        str = "��� ������� = 11";
    else if(speed_wind>=32.7)
        str = "��� ������� = 12";
    }
    return str;
}
string size_helmet(int size_h)
{
    string helm_size;
    setlocale(LC_ALL,"ukr");
    if(size_h<53||size_h>62)
    {
        helm_size = "�� ����� ������ �����";
    }
    else
    {
    if (size_h == 53||size_h == 54)
        helm_size = "����� ������ ������ XS";
    else if (size_h == 55 || size_h == 56)
        helm_size = "����� ������ ������ S";
    else if (size_h == 57 || size_h == 58)
        helm_size = "����� ������ ������ M";
    else if (size_h == 59 || size_h == 60)
        helm_size = "����� ������ ������ L";
    else if (size_h == 61 || size_h == 62)
        helm_size = "����� ������ ������ XL";
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
        cout<<"�� ����� ������ �����";
    }
}
void write_f(string file,string in_file)
{
    setlocale(LC_ALL,"ukr");
    ofstream ofile(file);
    if(!ofile.is_open())
    {
        cout<<"�� ������� �i������ ����\n";
    }
    else
    {
        ofile<<"      ���� ������\n";//10.1.1
        ofile<<"����, �������������, ������\n";//10.1.1
        ofile<<"          2023\n";//10.1.1
        ofile<<"��i �i���� ����������� �������: �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �\n";//task 10.1.2
        string str_w = "";
        ifstream infile(in_file);
        if (infile.is_open())
            {
        string lines;
        while (getline(infile, lines))
            {
            str_w += lines + " ";
        }
        infile.close();
    }
    else {
        cout << "�� ������� �i������ ����\n";
    }
    string word = "";
    string w[30] = {"�����", "���", "������", "�", "�������", "���", "��", "�", "���", "���������", "�", "���", "�", "�", "���", "��", "��", "��", "��", "����", "���", "�����", "�", "�����", "�", "������", "����", "�����", "�", "������"};
    bool error_found = false;
    for (int i = 0; i < str_w.length(); i++)
        {
        if (str_w[i] == ',' || str_w[i] == '!' || str_w[i] == ' ' || str_w[i] == '?') {
            if (word != "")
                {
                bool found = false;
                for (int j = 0; j < 30; j++)
                {
                    if (word == w[j])
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    ofile<< "� ��� � ������� � ����i \"" << word << "\""<< endl;
                    error_found = true;
                }
                word = "";
            }
        }
        else
        {
            word += str_w[i];
        }
    }

    if (word != "")
        {
        bool found = false;
        for (int j = 0; j < 30; j++)
        {
            if (word == w[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            ofile<< "� ��� � ������� � ����i \"" << word << "\""<< endl;
            error_found = true;
        }
    }
    if (!error_found)
    {
        ofile<<"������� � ������ �� ��������\n";
    }
        cout<<"��� ������� ���i���\n";
        ofile.close();
    }
}
void append_f(string i_file)
{
    setlocale(LC_ALL,"ukr");
    fstream app_file(i_file, ios::app);
    if(!app_file.is_open())
    {
        cout<<"�� ������� �i������ ����\n";
    }
    else
    {
        app_file<<"���������� ��������� ������ � ��������� ������, ��������� ���� �� ��������� ó��\n";//task 10.2.1
        time_t now_time;
        time(&now_time);
        app_file<<ctime(&now_time);//task 10.2.1
        cout<<"��� ������� ���i���\n";
        app_file.close();
    }
}
double number_f(string n_file,double num_x,double num_y,double num_z,int num_b)
{
    setlocale(LC_ALL,"ukr");
    ofstream num_file(n_file);
    if(!num_file.is_open())
    {
        cout<<"�� ������� �i������ ����\n";
    }
    else
    {
        num_file<<s_calculation(num_x,num_y,num_z)<<endl;//10.3.1
        int len = 0;
        if (num_b < 1)
        {
            cout << "b �� � ����������� ������";
        }
        else
        {
            int bin_func[100];
            for (int i = 0;; i++)
            {
                len++;
                if (num_b <= 1)
                {
                    bin_func[i] = 1;
                    break;
                }
                else
                {
                    bin_func[i] = num_b % 2;
                    num_b /= 2;
                }
            }
            num_file<<"���� ����� � ��i����i� ������i = ";
            for(int i = len-1;i>=0;--i)
            {
                num_file<<bin_func[i];
            }
        }
        cout << "��� ������� ���i���";
        num_file.close();
    }
        num_file.close();
    }
