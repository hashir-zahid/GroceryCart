#include<iostream>
#include "C:\Users\hashir\Desktop\DSA\Linkedlist.h"   //Use your own path
using namespace std;
template <class T>
class ILL:public LinkedList<T>
{
     public:
     	void traversing();
     	double add(int id);
	     	
};

template <class T>
void ILL<T>::traversing()
{
	Node<T>* ptr=this->getHead();	
	while (ptr!=0)
	{
    	ptr->getInfo()->display();
	    ptr=ptr->getNext();
	}	
}

template<class T>
double ILL<T>::add(int id)
{
	Node<T>* ptr = this->getHead();
	while(ptr->getInfo()->getId()!=id)
	{
		ptr=ptr->getNext();
	}
	return ptr->getInfo()->getPricePerItem();
}

