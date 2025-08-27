#include<iostream>
#include "ILL.h"
using namespace std;
template<class T>
class CartLL:public ILL<T>
{
     public:
     	void traversing();
		void remove(int id);  
		double generateBill();   	
};


template <class T>
void CartLL<T>::traversing()
{
	Node<T>* ptr=this->getHead();
	
	while (ptr!=0)
	{
		ptr->getInfo()->display();
		ptr=ptr->getNext();
    }	
}


template <class T>
void CartLL<T>::remove(int id)
{	
   
   Node<T>* ptr = this->getHead();
   Node<T>* prev = 0;
   while (ptr!=0) 
   {
            if (ptr->getInfo()->getId() ==id) 
             {
                       if (prev!=0) 
	            {
                                 prev->setNext(ptr->getNext());
                       }
                       else
				 
		 {
                                   this->setHead(ptr->getNext());
                       }
                       delete ptr;
                       return;
            }
            prev = ptr;
            ptr =  ptr->getNext();
    }
   
}

template <class T>
double CartLL<T>::generateBill()
{
	Node<T>* ptr = this->getHead();
	double sum=0;
	while (ptr!=0)
	{
		ptr->getInfo()->display();
		sum = sum + ptr->getInfo()->getPrice();
		ptr=ptr->getNext();
            }
    return sum;
		
}
