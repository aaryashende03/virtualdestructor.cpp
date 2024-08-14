//Program : This program is based on virtual destructor concept which is possible through upcasting(new) and delete operator.
// new -> Constructor (up to bottom) & delete -> Destructor(down to up)


#include<iostream>
using namespace std;
class Base
{
	public: int i , j;
	
Base()
{
cout<<"Base Constructor"<<endl;
}

virtual ~ Base()  //Virtual Destructor
{
cout<<"Base Destructor"<<endl;
}

};

class Derrived: public Base
{
public:   int x , y;

Derrived()
{
cout<<"Derrived Constructor"<<endl;
}
~Derrived()
{
cout<<"Derrived Destructor"<<endl;
}

};

int main()
{
Base*bp = new Derrived(); //Allocation of Memory  //Upcasting
//Derrived*dp = new Derrived(); //No Casting

cout<<"Size of Base : "<<sizeof(Base)<<endl;
cout<<"Size of Derrived : "<<sizeof(Derrived)<<endl;

delete bp; //Deallocation of Memory 
//delete dp;

return 0;
}	