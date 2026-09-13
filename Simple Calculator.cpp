#include <iostream>
#include <cmath>
using namespace std;
void calculate();
void addi(double,double);
void subt(double, double);
void mult(double, double);
void divi(double, double);
void powe(double, double);
int main()
{
	char t1='y';
	while ((t1 == 'y') || (t1 == 'Y'))
	{
	cout <<"============================\n"
	     <<"    SIMPLE CALCULATOR    \n"
		 <<"============================\n";
	calculate();

	cout<<"\n\nDo you want to repeat ? Press Y/n \n";
	cin>>t1;
	}
    return 0;

}
void calculate()
{
	double a, b;
	char select;
	cout << "Enter two numbers for calculations. \nNotice : The first number shall be considered the dividend in case of division \n";
	cin >> a >> b;
	cout << "\nSelect an operation:\n"
		<< "Multiplication  *\n"
		<< "Division        /\n"
		<< "Addition        +\n"
		<< "Subtraction     -\n"
		<< "Power           ^\n"
		<< "Enter choice: ";
	cin>> select;
	switch (select)
	{
	    case '+':
		    addi(a,b);
			break;
		case '-':
			subt(a, b);
			break;
		case '*':
			mult(a, b);
			break;
		case '/':
			divi(a, b);
			break;
		case '^':
			powe(a, b);
			break;
		default:
		    cout<<"Invalid Operation !!";
			break;

	}
}
	void addi(double m, double n)
	{
	    cout<<"Addition of the two numbers is :"<<m+n;

	}
	void subt(double m, double n)
	{
		cout << "Subtraction of the two numbers is :" << m - n;

	}
	void mult(double m, double n)
	{
		cout << "Multiplication of the two numbers is :" << m * n;

	}
	void divi(double m, double n)
	{
		cout << "Division of the two numbers is :" << m / n;

	}
	void powe(double m, double n)
	{
		cout << "power of the first number raised to next number is :" << pow(m,n);

	}
