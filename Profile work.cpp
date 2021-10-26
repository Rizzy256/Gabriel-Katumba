#include <iostream>
#include <string>
using namespace std;

int main(){
string Fname, Lname, Meal, Movie;
cout<<"Please enter your First Name: \n";
getline(cin, Fname);
cout<<"Please enter your Last Name: \n";
getline(cin, Lname);
cout<<"Please enter your favorite Meal: \n";
getline(cin, Meal);
cout<<"Please enter your favorite Movie: \n";
getline(cin, Movie);
cout<<"\n\n";
cout<< Fname<< " "<<Lname<< "'s favorite things are:";
cout<< Meal<< " and the movie";
cout<< Movie;

return 0;
}
