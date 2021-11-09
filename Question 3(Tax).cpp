#include<iostream>
using namespace std;

//136636 Gabriel Katumba

int main(){
	int gross_salary = 10000;
	float net_salary , tax_ded;
	float tax =.25;
	tax_ded = gross_salary * tax;
	net_salary = gross_salary - tax_ded;
	cout<<"Therefore the net salary is :"<< net_salary<<endl;
	cout<<"Therfore the tax payable is :"<< tax_ded <<endl;
	
	return 0;
}
