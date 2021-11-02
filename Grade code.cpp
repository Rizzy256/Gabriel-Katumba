#include <iostream>
using namespace std;

int main(){
string name;
int mark;
cout<<"Please enter name:\n";
getline(cin,name);
cout<<"Please enter mark:\n";
cin>>mark;
if (mark>=70){
	cout<<name<<"'s mark counts as an: A";
}	
else if(mark>=60){
	cout<<name<<"'s mark counts as a :B";
	}
else if(mark>=50){
	cout<<name<<"'s mark counts as a :C";
	}
else if(mark>=40){
	cout<<name<<"'s mark counts as a : D";
	}
else if(mark<=30){
	cout<<name<<"'s mark counts as a : F";
	}

	return 0;
}

