#include<iostream>
using namespace std;
class Items
{
	private:
		int id;
		string name;
		string description;
		double pricePerItem;
	public:
		Items(int id , string name , string description , double pricePerItem)
		{
			this->id = id;
			this->name = name;
			this->description = description;
			this->pricePerItem = pricePerItem;
		}
		
		void setId(int id);
		int getId();
		
		void setName(string name);
		string getName();
		
		void setDescription(string description);
		string getDescription();
		
		void setPricePerItem(double pricePerItem);
		double getPricePerItem();
		
		void display();
	
};


void Items::setId(int id) 
{
	this->id = id;
}
int Items::getId()
{
	return this->id;
}


void Items::setName(string name)
{
	this->name = name;
}
string Items::getName()
{
	return this->name;
}
		
void Items::setDescription(string description)
{
	this->description = description;
}
string Items::getDescription()
{
	return this->description;
}
		
void Items::setPricePerItem(double pricePerItem)
{
	this->pricePerItem = pricePerItem;
}
double Items::getPricePerItem()
{
	return this->pricePerItem;
}

void Items::display()
{
	cout<<endl;
	cout<<"Item ID : "<<this->id<<endl;
	cout<<"Item Name : "<<this->name<<endl;
	cout<<"Item Description : "<<this->description<<endl;
	cout<<"Price Per Item : "<<this->pricePerItem<<endl;
}
