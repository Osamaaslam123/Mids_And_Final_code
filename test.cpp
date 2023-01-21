#include<iostream>
using namespace std;
class Base
{
public:
	Base(){
		cout<<"he is the only god and that is ";
	}
};

class Derived : public Base {
public:
	Derived(){
	cout<<" only ";
		cout <<" ALLAH ";
}
 };
int main()
{

Derived d;

return 0;
}

