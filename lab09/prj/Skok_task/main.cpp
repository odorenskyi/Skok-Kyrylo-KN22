#include <iostream>
#include<ModulesSkok.h>
#include<stdlib.h>
#include <cstring>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"ukr");
    char var[1000];
    char var_1[1000];
    for(int i = 0; i == 0;)
    {
        cout<<("������ ����� ��������, ��� ������ ��������� \"7\",\"5\",\"4\",\"3\"\n");
        cin>>var;
        if (strlen(var) == 1)
        {
        switch(var[0])
        {
            case '7':
                {
                    int f_var,s_var,t_var;
                    cout<<"����i�� x\n";
                    cin>>f_var;
                    cout<<"����i�� y\n";
                    cin>>s_var;
                    cout<<"����i�� z\n";
                    cin>>t_var;
                    cout<<s_calculation(f_var,s_var,t_var)<<"\n";
                    system("PAUSE");
                    system("cls");
                    break;
                }
            case '5':
                {
                    cout<<"����i�� ���� �i���\n";
                    float power_w;
                    cin>>power_w;
                    cout<<pow_wind(power_w)<<endl;
                    system("PAUSE");
                    system("cls");
                    break;
                }
            case '4':
                {
                    cout<<"����i�� ����i� ������\n";
                    int size_head;
                    cin>>size_head;
                    cout<<size_helmet(size_head)<<endl;
                    system("PAUSE");
                    system("cls");
                    break;
                }
            case '3':
                {
                    cout<<"����i�� ���������� ����� (�i� 0 �� 10008000)\n";
                    int bit;
                    cin>>bit;
                    bit_15(bit);
                    cout<<"\n";
                    system("PAUSE");
                    system("cls");
                    break;
                }
            default:
                {
                    cout<<"������ \"t\",\"T\", a�� \"C\", ���� ������ ��������� ������ ��������\n\a";
                    cin>>var_1;
                    if(strlen(var_1)==1)
                    {
                        if(var_1[0]=='t'||var_1[0]=='T'||var_1[0]=='C')
                        {
                            i++;
                        }
                    }
                    else
                    {
                        system("cls");
                        break;
                    }
                }
        }
        }
                else
        {
                cout<<"������ \"t\",\"T\", a�� \"C\", ���� ������ ��������� ������ ��������\n\a";
                    cin>>var_1;
                    if(strlen(var_1)==1)
                    {
                        if(var_1[0]=='t'||var_1[0]=='T'||var_1[0]=='C')
                        {
                            i++;
                        }
                    }
                    else
                    {
                        system("cls");
                    }
    }
    }
    return 0;
}

