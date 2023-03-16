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
    cout<<"ѕрограмму розробив —кок  ирило ©\n";
}
double mathfunc(double a,double b)
{
        if(a+7<fabs(b-5))
            cout<<"–езультат логiчного виразу в числовому вигл€дi  = "<<true;
        else
            cout<<"–езультат логiчного виразу в числовому вигл€дi  = "<< false;
        cout<<"\n";
}
int mathhex(int x,int y, int z)
{
    int S = s_calculation(x,y,z);
    cout<<"„исла в дес€тков≥й систем≥ численн€:\n";
    cout<<"x = "<<dec<<x<<"\n";
    cout<<"y = "<<dec<<y<<"\n";
    cout<<"z = "<<dec<<z<<"\n";
    cout<<"S = "<<dec<<S<<"\n";
    cout<<"„исла в ш≥стнадц€тков≥й системi:\n";
    cout<<"x = "<<hex<<x<<"\n";
    cout<<"y = "<<hex<<y<<"\n";
    cout<<"z = "<<hex<<z<<"\n";
    cout<<"S = "<<hex<<S<<"\n";
}

int main()
{
    setlocale(LC_ALL,"ukr");
    double ab,ba;
    cout<<"¬ведiть a\n";
    cin>>ab; //a
    cout<<"¬ведiть b\n";
    cin>>ba;//b
    int j,k,l;
    cout<<"¬ведiть x\n";
    cin>>j;//x
    cout<<"¬ведiть y\n";
    cin>>k;//y
    cout<<"¬ведiть z\n";
    cin>>l;//z
    copyright();
    mathfunc(ab,ba);
    mathhex(j,k,l);
    return 0;
}
