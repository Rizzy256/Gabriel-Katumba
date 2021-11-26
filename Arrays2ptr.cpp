#include<iostream>
#include<string>

//136636 Gabriel Katumba

using namespace std;
int main(){

double number1,number2;
number1=7.3;
double* ptr;
ptr= &number1;
cout<<"The Value of the object pointed to by ptr is: "<<*ptr<<endl;
number2=*ptr;
cout<<"The Value of number2 is: "<<number2<<endl;
cout<<"The address of number1 is: "<<&number1<<endl;
cout<<"The Address stored in ptr is: "<<ptr<<endl;
//The Address ouput above for ptr is the same as the address of the number.


return 0;
}
