//Date: 2018-10-07
//Chapter 10 exercise

#include<iostream>
using namespace std;

class Temperature
{
public:
	Temperature();
	Temperature(double degree, char scale);
	void set(double newDegree, char newScale);
	void showTemp();

private:
	double degree;
	char scale;
};

int main()
{
	Temperature t1;
	t1.showTemp();
	double degree = 0;
	char scale = '0';
	cout << "Enter C or F for temperature scale: ";
	cin >> scale;
	cout << "Enter the temperature value: ";
	cin >> degree;
	t1.set(degree, scale);
	t1.showTemp();

	return 0;
}

Temperature::Temperature():degree(0),scale('0')
{

}

Temperature::Temperature(double degree, char scale)
{
	this->degree = degree;
	this->scale = scale;
}

void Temperature::set(double newDegree, char newScale)
{
	this->degree = newDegree;
	this->scale = newScale;
}
void Temperature::showTemp()
{
	cout << "The entered temperature is " << this->degree
		<< " degrees in " << this->scale << endl;
}
