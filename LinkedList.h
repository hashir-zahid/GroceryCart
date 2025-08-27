#include <iostream>
#include "C:\Users\waqee\Desktop\Hashir\DSA\Linked List\Node.h"
using namespace std;
template <class T>
class LinkedList
{
    private:
        Node<T> *head;
        Node<T> *tail;
    public:
        LinkedList()
        {
            head=tail=0;
        }

        Node<T>* getHead();
        Node<T>* getTail();
        void setHead(Node<T>* head);
        void setTail(Node<T>* head);
        void addToTail(T element);
        void addToHead(T element);
        
        void traversing();
        Node<T>* search(T element);
        void occurence(T element);
        
        void addAfter(T exist_val,T new_val);
        void addBefore(T exist_val,T new_val);
        void deleteFromHead();
        void deleteFromTail();
        void deleteGivenElement(T element);
};
        

template <class T>
Node<T>* LinkedList<T>::getHead()
{
    return this->head;
}

template <class T>
Node<T>* LinkedList<T>::getTail()
{
    return this->tail;
}

template <class T>
void LinkedList<T>::setHead(Node<T>* head)
{
	this->head=head;
}
template <class T>
void LinkedList<T>::setTail(Node<T>* head)
{
	this->tail=tail;
}


template <class T>
void LinkedList<T>::addToTail(T element)
{
    Node<T> *n=new Node<T> (element);

    if(head==0&&tail==0)
    {
        head=tail=n;
    }
    else
    {
        tail->setNext(n);
        tail=n;
    }

}

template <class T>
void LinkedList<T>::addToHead(T element)
{
    Node<T>* n=new Node<T> (element);

    if(head==0&&tail==0)
    {
        head=tail=n;
    }
    else
    {
        n->setNext(head);
        head=n;
    }
}

template <class T>
void LinkedList<T>::traversing()
{
    Node<T>* ptr=head;

    while (ptr!=0)
    {
        ptr->display();
        ptr=ptr->getNext();
    }
}

template <class T>
Node<T>* LinkedList<T>::search(T element)
{
    Node<T>* ptr=head;

    while (ptr!=0)
    {
    	if(element!=ptr->getInfo())
    	{
    		return ptr;
		}
        ptr=ptr->getNext();
    }
    return 0;
}

template <class T>
void LinkedList<T>::occurence(T element)
{
	Node<T>* ptr=head;
    int k=0;
    while (ptr!=0)
    {
        if(ptr->getInfo()==element)
           k++;
        ptr=ptr->getNext();
    }
    cout<<"\nYour element occur "<<k<<" times in list.\n\n";

}


template <class T>
void LinkedList<T>::addAfter(T exist_val,T new_val)
{
	if((head==0 && tail==0) || (search(exist_val)==0))
	{
		cout<<"Nothing to do";
	}
	else if(search(exist_val)==tail)
	{
		addToTail(new_val);
	}
	else
	{
		Node<T>* n=new Node<T>(new_val);
		Node<T>* ptr=head;
		while(ptr->getInfo()!=exist_val)
		{
			ptr=ptr->getNext();
		}
		n->setNext(ptr->getNext());
		ptr->setNext(n);
		
	}
}

template <class T>
void LinkedList<T>::addBefore(T exist_val,T new_val)
{
    if((head==0 && tail==0) || (search(exist_val)==0))
	{
		cout<<"Nothing to do";
	}
	else if(search(exist_val)==head)
	{
		addToHead(new_val);
	}
	else
	{
		Node<T>* n=new Node<T>(new_val);
		Node<T>* ptr=head;
		Node<T>* pre=head;
		while(ptr->getInfo()!=exist_val)
		{
			pre=ptr;
			ptr=ptr->getNext();
		}
		n->setNext(ptr);
		pre->setNext(n);
		
	}	
}

template <class T>
void LinkedList<T>::deleteFromHead()
{
	if(head==0 && tail==0)
	{
		cout<<"Nothing to do";
	}
	else if(head==tail)
	{
		delete head;
		head=tail=0;
	}
	else
	{
		Node<T>* ptr=head->getNext();
		delete head;
		head=ptr;
	}
}

template <class T>
void LinkedList<T>::deleteFromTail()
{
	if(head==0 && tail==0)
	{
		cout<<"Nothing to do";
	}
	else if(head==tail)
	{
		delete tail;
		head=tail=0;
	}
	else
	{
		Node<T>* ptr=head;
		while(ptr->getNext()!=tail)
		{
			ptr=ptr->getNext();
		}
		ptr->setNext(0);
		delete tail;
		tail=ptr;
	}
}

template <class T>
void LinkedList<T>::deleteGivenElement(T element)
{
	if((head==0 && tail==0) || (search(element)==0))
	{
		cout<<"Nothing to do";
	}
	else if(head==tail)
	{
		delete head;
		head=tail=0;
	}
//	else if(search(element)==head)
//	{
//		deleteFromHead();
//	}
	else if(search(element)==tail)
	{
		deleteFromTail();
	}
	else
	{
		Node<T>* ptr=head;
		Node<T>* pre=head;
		while(ptr->getInfo()!=element)
		{
			pre=ptr;
			ptr=ptr->getNext();
		}
		pre->setNext(ptr->getNext());
		delete ptr;
	}
}
