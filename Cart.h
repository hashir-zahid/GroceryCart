#include<iostream>
using namespace std;
class Cart
{
	private:
		int id;
		int quantity;
		double price;
	public:
		Cart(int id , int quantity , double price)
		{
			this->id = id;
			this->quantity = quantity;
			this->price = price;
		}	
		void setId(int id);
		int getId();		
		void setQuantity(int quantity);
		int getQuantity();		
		void setPrice(double price);
		double getPrice();		
		void display();	
};

void Cart::setId(int id) 
{
	this->id = id;
}
int Cart::getId()
{
	return this->id;
}

		
void Cart::setQuantity(int quantity)
{
	this->quantity = quantity;
}
int Cart::getQuantity()
{
	return this->quantity;
}

		
void Cart::setPrice(double price)
{
	this->price = price;
}
double Cart::getPrice()
{
	return this->price;
}


void Cart::display()
{
	cout<<endl;
	cout<<"Item ID : "<<this->id<<endl;
	cout<<"Item Quantity : "<<this->quantity<<endl;
	cout<<"Price : "<<this->price<<endl;
}
