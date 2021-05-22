#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	
	system("color e2");
	int n2;
	string n1;
	cout<<"ENTER YOUR NAME:"<<'\n';
	getline(std::cin,n1);
	cout<<"NICE YOUR NAME.PLS ";
	cout<<"ENTER YOUR AGE:"<<'\n';
	cin>>n2;
	if(n2>=18)
	cout<<"YOU ARE ALLOWED TO POLL";
	else
	cout<<"YOU ARE NOT ALLOWED TO POLL\n";
	system("pause");
	return 0;
}
	
	
	

