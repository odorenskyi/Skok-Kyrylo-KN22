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
        cout<<("Введіть номер функціії, яку хочете викликати \"7\",\"5\",\"4\",\"3\"\n");
        cin>>var;
        if (strlen(var) == 1)
        {
        switch(var[0])
        {
            case '7':
                {
                    int f_var,s_var,t_var;
                    cout<<"Введiть x,y та z\n";
                    cin>>f_var;
                    cin>>s_var;
                    cin>>t_var;
                    cout<<s_calculation(f_var,s_var,t_var)<<"\n";
                    system("PAUSE");
                    system("cls");
                    break;
                }
            case '5':
                {
                    pow_wind(0);
                    system("PAUSE");
                    system("cls");
                    break;
                }
            case '4':
                {
                    size_helmet(0);
                    system("PAUSE");
                    system("cls");
                    break;
                }
            case '3':
                {
                    bit_15(0);
                    cout<<"\n";
                    system("PAUSE");
                    system("cls");
                    break;
                }
            default:
                {
                    cout<<"Введіть \"t\",\"T\", aбо \"C\", якщо хочете завершити роботу програми\n\a";
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
                cout<<"Введіть \"t\",\"T\", aбо \"C\", якщо хочете завершити роботу програми\n\a";
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

