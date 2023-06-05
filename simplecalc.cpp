#include<iostream>
using namespace std;
class calculator
{
private:
double n1, n2, R;
public:
void setdata(double a, double b)
{
	n1= a;
	n2= b;
	}	
	void add()
	{
		R= n1+n2;
		cout<< R <<endl;
	}
	void sub()
	{
		R= n1-n2;
		cout<< R <<endl;
	}
	void mul()
	{
		R= n1*n2;
		cout<< R <<endl;
	}
	void div()
	{
		R= n1/n2;
		cout<< R <<endl;
	}
	
};
	int main()
	{
		calculator c1;
		c1.setdata(5.1, 2);
		c1.add();
		c1.sub();
		c1.mul();
		c1.div();
		return 0;		
	}

