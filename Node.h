#include <iostream>
using namespace std;
template <class T>
class Node
{
    private:
        T info;
        Node<T> *next;
    public:
        Node(T info=0,Node<T> *next=0)
        {
            this->info=info;
            this->next=next;
        }

        void setInfo(T info);
        void setNext(Node<T> *next);
        T getInfo();  
        Node<T>* getNext();
        void display();  
};

template <class T>
void Node<T>::setInfo(T info)
{
    this->info=info;
}
 
template <class T>
void Node<T>::setNext(Node<T> *next)
{
    this->next=next;
}
 
template <class T>
T Node<T>::getInfo()
{
    return info;  
}
 
template <class T>
Node<T>* Node<T>::getNext()
{
    return next;
}

template <class T>
void Node<T>::display()
{
    cout<<"\n|("<<this<<")|"<<this->info<<"|"<<this->next <<"|"<<endl;
}
