#include <iostream>
using namespace std;

float p= 3.141592;
float area(float h, float r){
	return 2*p*r*h+2*p*r*r;
}

float volume(float h , float r){
	return p*r*r*h;
}

int main(){
	float r;
	float h;
	cout<<"radius: ";
	cin >> r;
	cout << "Height: ";
	cin >> h;
	
	cout << "Area is: \n";
	cout << area(h, r);
	cout << "\n";
	cout << "Volume is: \n";
	cout << volume(h, r);
	cout << "\n";
	
return 0;
}
