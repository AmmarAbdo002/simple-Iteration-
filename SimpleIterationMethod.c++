#include <iostream>
#include <cmath>
using namespace std;
void SimpleIterationMethod();
int main()
{
    SimpleIterationMethod();
    return 0;
}

void SimpleIterationMethod()
{
    double x, x0;
    double f_x = pow(x, 3) - (2 * x) - 5;
    cout << "Enter the initial point x0 : ";
    cin >> x0;
    x = (pow(x, 3) - 5) / 2;
    double xPar = (1.5) * pow(x, 2);
    double xPar_x0 = (1.5) * pow(x0, 2);

    if (xPar_x0 < 1)
    {
        for (int i = 0; i < 7; i++)
        {
            x = (pow(x0, 3) - 5) / 2;
            x0 = x;
        }
    }
    else
    {
        x = pow(((2 * x) + 5), (0.333333333));
        xPar = (0.666666667) * pow(((2 * x) + 5), (-0.666666667));
        xPar_x0 = (0.666666667) * pow(((2 * x0) + 5), (-0.666666667));
        if (xPar_x0 < 1)
        {
            for (int i = 0; i < 3; i++)
            {
                x =  pow(((2 * x0) + 5), (0.333333333));
                x0 = x;
            }            
        }
    }
    cout<<"___________________________________________________"<<endl;
    cout<<"x = "<<x;
}