#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double quadCoef,linCoef,constant;
    cout << "Enter the coefficent of the quadratic term>";
    cin >> quadCoef;
    cout << "Enter the coefficient of the linear term>";
    cin >> linCoef;
    cout << "Enter the constant term>";
    cin >> constant;
    double root_1, root_2, discriminant = pow(linCoef,2)-4*quadCoef*constant;
    if (quadCoef = 0){
        cout << " This is not a quadratic equation" << endl;
        }
        if (discriminant >=0){
            if (discriminant = 0){
                root_1 = (-linCoef/(2*quadCoef));
                root_2 = (-linCoef/(2*quadCoef));
                cout<<fixed<<setprecision(5)<<"The solution of the equation "<<quadCoef<<"x^2";
                cout<<fixed<<setprecision(5)<<linCoef<<"x"<<constant<<"=0.00000"<<endl;
                cout<<fixed<<setprecision(5)<<"is {"<<root_1<<", "<<root_2<<"}."<<endl;
                }else{
                    double root_1 = (-linCoef+sqrt(pow(linCoef,2)-4*quadCoef*constant))/(2*quadCoef);
                    double root_2 = (-linCoef-sqrt(pow(linCoef,2)-4*quadCoef*constant))/(2*quadCoef);
                    cout <<fixed<<setprecision(5)<< "The solution of the equation " << quadCoef << "x^2 + ";
                    cout <<fixed<<setprecision(5)<<linCoef<< "x +" << constant << "=0.00000" << endl;
                    }
        }else
            {
                double u = (-linCoef/(2*quadCoef));
                double v = (sqrt(fabs(discriminant))/fabs(2*quadCoef));
                double root_1 = u+v;
                double root_2 = u-v;
                cout<<fixed<<setprecision(5)<<"The solution of the equation "<<quadCoef<<"x^2";
                cout<<fixed<<setprecision(5)<<linCoef<<"x"<<constant<<"=0.00000"<<endl;
                cout<<fixed<<setprecision(5)<<"is {"<<root_1<<", "<<root_2<<"}."<<endl;
            }

return 0;
}