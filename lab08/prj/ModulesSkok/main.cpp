#include"ModulesSkok.h"
#include<cmath>
    int s_calculation(int x,int y,int z)
{
    int S = sqrt(z)-(sqrt(1+x)-3*cos(x))/(pow(x,2)+sin(M_PI*x));
    return S;
}
