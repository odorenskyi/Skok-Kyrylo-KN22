#include <iostream>
#include<stdlib.h>
#include<ModulesSkok.h>
using namespace std;

int main()
{
    int t1 = s_calculation(5,6,7);
    if (t1 == 2)
        cout<<"1.Correct\n";
    int t2 = s_calculation(1,1,1);
    if (t2 == 1)
        cout<<"2.Correct\n";
        int t3 = s_calculation(2,2,2);
    if (t3 == 0)
        cout<<"3.Correct\n";
        int t4 = s_calculation(9,9,9);
    if (t4 == 2)
        cout<<"4.Correct\n";
        int t5 = s_calculation(10,10,10);
    if (t5 == 3)
        cout<<"5.Correct\n";
        int t6 = s_calculation(100,100,100);
    if (t6 == 9)
        cout<<"6.Correct\n";
        int t7 = s_calculation(500,500,500);
    if (t7 == 22)
        cout<<"7.Correct\n";
        int t8 = s_calculation(11,11,11);
    if (t8 == 3)
        cout<<"8.Correct\n";
        int t9 = s_calculation(53,0,3);
    if (t9 == 1)
        cout<<"9.Correct\n";
        int t10 = s_calculation(1000,0,1000);
    if (t10 == 31)
        cout<<"10.Correct\n";
    return 0;
}
