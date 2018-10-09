//Date: 2018-10-07
//Chapter 10 Practice Programs #3

#include<iostream>
using namespace std;

class CounterType
{
public:
	CounterType():c(0){}
	CounterType(unsigned int a):c(a){}
	void increment();
	void decrement();
	unsigned int getCount();
	ostream& outStream(ostream& out);

	friend bool equal(CounterType c1, CounterType c2);

private:
	unsigned int c;
};

int main()
{
	char ans = '0';
	CounterType c1;
	CounterType c2(3);
	cout << "Counter #1 is " << c1.getCount() << endl
		<< "Counter #2 is " << c2.outStream(cout) << endl;
	
	//Counter c1 will be modifies in the loop
	//Counter c2 stays as a constant
	do
	{
		//User is asked to either ++, --, or exit
		cout << "Current count in c1 is " << c1.getCount() << endl;
		if(equal(c1, c2))
			cout << "c1 and c2 are equal" << endl;
		else
			cout << "c1 and c2 are not equal" << endl;

		cout << "For c1, enter <i> for increment, <d> for decrement," << endl
			<< "or <e> for exiting simulation." << endl
			<< "Answer: ";
		cin >> ans;
		cin.ignore(100,'\n');

		if(ans == 'i')
			c1.increment();
		else if(ans == 'd')
			c1.decrement();
		else
		{
			cout << "Simulation ended." << endl;
			break;
		}
	}while(true);

	return 0;
}

void CounterType::increment()
{
	c = c+1;
}
void CounterType::decrement()
{
	//Counter value must be non-negative
	if(c > 0)
		c = c-1;
	else
		c = 0;
}
unsigned int CounterType::getCount()
{
	return(c);
}
ostream& CounterType::outStream(ostream& out)
{
	out << this->c;
	return(out);
}

bool equal(CounterType c1, CounterType c2)
{
	return(c1.c == c2.c);
}
