#include<iostream>
#include<string>
using namespace std;
int main(){
int sum =0;
int ten[10]={10,20,30,40,50,60,70,80,90,100};
for(int x=0; x<10;x++){
sum=sum+ten[x];//OR sum+=ten;
}
cout<<"The Sum of the 10 Values is: "<<sum<<endl;


return 0;
}

